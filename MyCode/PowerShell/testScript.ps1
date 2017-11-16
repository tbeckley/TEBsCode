Add-Type -AssemblyName System.Windows.Forms
$FolderBrowser = New-Object System.Windows.Forms.FolderBrowserDialog
[void]$FolderBrowser.ShowDialog()
$a = "Folder Location Selected: "+$FolderBrowser.SelectedPath;
Write-Output $a