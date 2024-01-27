#pragma once
#include "MyForm.h"
#include "MyForm.cpp"
namespace Project {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class DodajForm : public System::Windows::Forms::Form
    {
    public:
        DodajForm(void)
        {
            InitializeComponent();
        }


    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::DateTimePicker^ dateTimePicker;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ textBoxTitle;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBoxDescription;
        System::Windows::Forms::Button^ buttonSave;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxTitle = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
            this->buttonSave = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(13, 13);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(38, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Date:";
            // 
            // dateTimePicker
            // 
            this->dateTimePicker->Location = System::Drawing::Point(58, 13);
            this->dateTimePicker->Name = L"dateTimePicker";
            this->dateTimePicker->Size = System::Drawing::Size(200, 20);
            this->dateTimePicker->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(13, 45);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(36, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Title:";
            // 
            // textBoxTitle
            // 
            this->textBoxTitle->Location = System::Drawing::Point(58, 42);
            this->textBoxTitle->Name = L"textBoxTitle";
            this->textBoxTitle->Size = System::Drawing::Size(200, 20);
            this->textBoxTitle->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(13, 78);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(66, 13);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Description:";
            // 
            // textBoxDescription
            // 
            this->textBoxDescription->Location = System::Drawing::Point(16, 95);
            this->textBoxDescription->Multiline = true;
            this->textBoxDescription->Name = L"textBoxDescription";
            this->textBoxDescription->Size = System::Drawing::Size(242, 100);
            this->textBoxDescription->TabIndex = 5;
            // 
            // buttonSave
            // 
            this->buttonSave->Location = System::Drawing::Point(16, 201);
            this->buttonSave->Name = L"buttonSave";
            this->buttonSave->Size = System::Drawing::Size(75, 23);
            this->buttonSave->TabIndex = 6;
            this->buttonSave->Text = L"Save";
            this->buttonSave->UseVisualStyleBackColor = true;
            this->buttonSave->Click += gcnew System::EventHandler(this, &DodajForm::buttonSave_Click);
            // 
            // DodajForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(270, 236);
            this->Controls->Add(this->buttonSave);
            this->Controls->Add(this->textBoxDescription);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxTitle);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->dateTimePicker);
            this->Controls->Add(this->label1);
            this->Name = L"DodajForm";
            this->Text = L"DodajForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
        // todo maybe
    }

};
}
