#include "MainSplash.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	EnTec_Group_Project::MainSplash form;
	Application::Run(%form);
}