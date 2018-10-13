Imports System.Text

Namespace Custom_RoutedCommand
	''' <summary>
	''' Interaction logic for MainWindow.xaml
	''' </summary>
	Partial Public Class MainWindow
		Inherits Window
		Public Shared ColorCmd As New RoutedCommand()
		Public Sub New()
			InitializeComponent()
		End Sub
		' ExecutedRoutedEventHandler for the custom color command.
		Private Sub ColorCmdExecuted(ByVal sender As Object, ByVal e As ExecutedRoutedEventArgs)
			Dim target As Panel = TryCast(e.Source, Panel)
			If target IsNot Nothing Then
				If target.Background Is Brushes.AliceBlue Then
					target.Background = Brushes.LemonChiffon
				Else
					target.Background = Brushes.AliceBlue
				End If
			End If
		End Sub

		' CanExecuteRoutedEventHandler for the custom color command.
		Private Sub ColorCmdCanExecute(ByVal sender As Object, ByVal e As CanExecuteRoutedEventArgs)
			If TypeOf e.Source Is Panel Then
				e.CanExecute = True
			Else
				e.CanExecute = False
			End If
		End Sub

	End Class
End Namespace