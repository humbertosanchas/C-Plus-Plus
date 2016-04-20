#include "frmCalculator.h"
#include "AboutForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace FormCalculator;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmCalculator());
}
