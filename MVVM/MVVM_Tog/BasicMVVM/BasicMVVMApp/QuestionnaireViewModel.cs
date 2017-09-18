//===================================================================================
// Microsoft patterns & practices
// Composite Application Guidance for Windows Presentation Foundation and Silverlight
//===================================================================================
// Copyright (c) Microsoft Corporation.  All rights reserved.
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY
// OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT
// LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE.
//===================================================================================
// The example companies, organizations, products, domain names,
// e-mail addresses, logos, people, places, and events depicted
// herein are fictitious.  No association with any real company,
// organization, product, domain name, email address, logo, person,
// places, or events is intended or should be inferred.
//===================================================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.Windows.Input;
using Microsoft.Practices.Prism.Commands;

namespace BasicMVVMApp
{
    public class QuestionnaireViewModel
    {
        private readonly Questionnaire questionnaire;

        public QuestionnaireViewModel()
        {
            this.questionnaire = new Questionnaire();
            this.AllColors = new[] { "Red", "Blue", "Green" };
            this.SubmitCommand = new DelegateCommand<object>(this.OnSubmit);
        }

        public Questionnaire Questionnaire
        {
            get { return this.questionnaire; }
        }

        public IEnumerable<string> AllColors { get; private set; }

        public ICommand SubmitCommand { get; private set; }

        private void OnSubmit(object obj)
        {
            Debug.WriteLine(this.BuildResultString());
        }

        private string BuildResultString()
        {
            StringBuilder builder = new StringBuilder();
            builder.Append("Name: ");
            builder.Append(this.questionnaire.Name);
            builder.Append("\nAge: ");
            builder.Append(this.questionnaire.Age);
            builder.Append("\nQuestion 1: ");
            builder.Append(this.questionnaire.Quest);
            builder.Append("\nQuestion 2: ");
            builder.Append(this.questionnaire.FavoriteColor);
            return builder.ToString();
        }
    }
}
