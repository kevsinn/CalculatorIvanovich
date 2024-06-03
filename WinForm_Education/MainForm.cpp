#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) 
{
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WinFormEducation::MainForm form;
	Application::Run(% form);
}