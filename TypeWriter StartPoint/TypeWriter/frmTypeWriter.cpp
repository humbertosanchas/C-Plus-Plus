
#include "frmTypeWriter.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace TypeWriter;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew frmTypeWriter());
}
