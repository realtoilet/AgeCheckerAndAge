#include "MainUI.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    AgeCheckerAndAge::MainUI form;
    Application::Run(% form);

    return 0;
}
