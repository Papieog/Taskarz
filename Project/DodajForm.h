#pragma once

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
        DodajForm(String^ title, String^ description, DateTime deadline)
    {
        InitializeComponent();
        textBoxTaskTitle->Text = title;
        textBox1->Text = description;
        dateTimePicker1->Value = deadline;
    }

    protected:
        ~DodajForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBoxTaskTitle;
        System::Windows::Forms::Button^ buttonDodaj;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;

        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxTaskTitle = (gcnew System::Windows::Forms::TextBox());
            this->buttonDodaj = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(13, 13);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(33, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Tytul:";
            // 
            // textBoxTaskTitle
            // 
            this->textBoxTaskTitle->Location = System::Drawing::Point(77, 10);
            this->textBoxTaskTitle->Name = L"textBoxTaskTitle";
            this->textBoxTaskTitle->Size = System::Drawing::Size(200, 20);
            this->textBoxTaskTitle->TabIndex = 1;
            // 
            // buttonDodaj
            // 
            this->buttonDodaj->Location = System::Drawing::Point(202, 108);
            this->buttonDodaj->Name = L"buttonDodaj";
            this->buttonDodaj->Size = System::Drawing::Size(75, 23);
            this->buttonDodaj->TabIndex = 2;
            this->buttonDodaj->Text = L"Zapisz";
            this->buttonDodaj->UseVisualStyleBackColor = true;
            this->buttonDodaj->Click += gcnew System::EventHandler(this, &DodajForm::buttonDodaj_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 108);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(184, 177);
            this->textBox1->TabIndex = 3;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(77, 37);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
            this->dateTimePicker1->TabIndex = 4;
            this->dateTimePicker1->Value = System::DateTime(2024, 1, 27, 14, 52, 30, 0);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(13, 43);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(42, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Termin:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(13, 92);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(31, 13);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Opis:";
            // 
            // DodajForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(296, 293);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->dateTimePicker1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBoxTaskTitle);
            this->Controls->Add(this->buttonDodaj);
            this->Name = L"DodajForm";
            this->Text = L"Dodaj Task";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    public:
        property String^ tytul {
            String^ get() {
                return textBoxTaskTitle->Text;
            }
        }
        property DateTime termin {
            DateTime get() {
                return dateTimePicker1->Value;
            }
        }
        property String^ opis {
            String^ get() {
                return textBox1->Text;
            }
        }

    private:
        System::Void buttonDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
            this->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->Close();
        }

};
}
