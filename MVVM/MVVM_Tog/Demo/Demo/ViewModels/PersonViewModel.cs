using System;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Framework;
using System.ComponentModel.Composition;
using System.Collections.ObjectModel;

namespace Demo.ViewModels
{
    [Export( "PersonViewModel", typeof( object ) )]
    public class PersonViewModel : BusinessObjectBase, IPartImportsSatisfiedNotification
    {
        private DelegateCommand editPersonCommand;
        private DelegateCommand addPersonCommand;
        private DelegateCommand deletePersonCommand;
        private Person selectedPerson;
        private ObservableCollection<Person> people;

        public PersonViewModel()
        {
        }

        [Import( ModalViewNames.EditPersonControlName )]
        public IModalView EditPersonControl
        {
            get;
            set;
        }

        [Import( ModalViewNames.DeleteControlName )]
        public IModalView DeleteControl
        {
            get;
            set;
        }

        [Import]
        public IModalDialog ModalDialog
        {
            get;
            set;
        }

        [Import]
        public IModalDialogWorker ModalDialogWorker
        {
            get;
            set;
        }

        [Import]
        public IPersonModel PersonModel
        {
            get;
            set;
        }

        public ObservableCollection<Person> People
        {
            get
            {
                return this.people;
            }
            set
            {
                if ( this.People == value )
                    return;

                this.people = value;
                this.OnPropertyChanged( "People" );
            }
        }

        public Person SelectedPerson
        {
            get
            {
                return this.selectedPerson;
            }
            set
            {
                if ( this.SelectedPerson == value )
                    return;

                this.selectedPerson = value;
                this.EditPersonCommand.RaiseCanExecuteChanged();
                this.DeletePersonCommand.RaiseCanExecuteChanged();
                this.OnPropertyChanged( "SelectedPerson" );
            }
        }

        public DelegateCommand AddPersonCommand
        {
            get
            {
                if ( this.addPersonCommand == null )
                    this.addPersonCommand = new DelegateCommand( this.OnAddPersonCommandExecute );

                return this.addPersonCommand;
            }
        }

        public DelegateCommand EditPersonCommand
        {
            get
            {
                if ( this.editPersonCommand == null )
                    this.editPersonCommand = new DelegateCommand( this.OnEditPersonCommandExecute, this.OnEditPersonCommandCanExecute );

                return this.editPersonCommand;
            }
        }

        public DelegateCommand DeletePersonCommand
        {
            get
            {
                if ( this.deletePersonCommand == null )
                    this.deletePersonCommand = new DelegateCommand( this.OnDeletePersonCommandExecute, this.OnDeletePersonCommandCanExecute );

                return this.deletePersonCommand;
            }
        }

        private void OnAddPersonCommandExecute()
        {
            Person newPerson = new Person()
            {
                HireDate = DateTime.Now
            };
            this.ModalDialogWorker.ShowDialog<Person>(
                this.ModalDialog, this.EditPersonControl, newPerson, p =>
                {
                    if ( this.ModalDialog.DialogResult.HasValue &&
                        this.ModalDialog.DialogResult.Value )
                    {
                        this.People.Add( p );
                    }
                } );
        }

        private void OnEditPersonCommandExecute()
        {
            Caretaker<Person> editableObject = new Caretaker<Person>( this.SelectedPerson );
            editableObject.BeginEdit();

            this.ModalDialogWorker.ShowDialog<Person>(
                this.ModalDialog, this.EditPersonControl, this.SelectedPerson, p =>
                {
                    if ( this.ModalDialog.DialogResult.HasValue &&
                        this.ModalDialog.DialogResult.Value )
                    {
                        editableObject.EndEdit();
                    }
                    else
                    {
                        editableObject.CancelEdit();
                    }
                } );
        }

        private bool OnEditPersonCommandCanExecute()
        {
            return this.SelectedPerson != null;
        }

        private void OnDeletePersonCommandExecute()
        {
            this.ModalDialogWorker.ShowDialog<Person>(
                this.ModalDialog, this.DeleteControl, this.SelectedPerson, p =>
                {
                    if ( this.ModalDialog.DialogResult.HasValue &&
                        this.ModalDialog.DialogResult.Value )
                    {
                        this.People.Remove( p );
                    }
                } );
        }

        private bool OnDeletePersonCommandCanExecute()
        {
            return this.SelectedPerson != null;
        }

        public void OnImportsSatisfied()
        {
            this.People = this.PersonModel.LoadData();
        }
    }
}
