#include "ToDoForm.h"
#include "DodajForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create the main form and run the application
    Project::MyForm form;
    Application::Run(% form);

    return 0;
}
