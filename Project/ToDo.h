#pragma once
//#include "Dodaj.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Dodaj_B;
	protected:


	private: System::Windows::Forms::Button^ zakoncz;

	private: System::Windows::Forms::Button^ usun;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ tytul;
	private: System::Windows::Forms::Label^ termin;
	private: System::Windows::Forms::Button^ edytuj;






	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Dodaj_B = (gcnew System::Windows::Forms::Button());
			this->zakoncz = (gcnew System::Windows::Forms::Button());
			this->usun = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tytul = (gcnew System::Windows::Forms::Label());
			this->termin = (gcnew System::Windows::Forms::Label());
			this->edytuj = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 20);
			this->textBox1->TabIndex = 0;
			// 
			// Dodaj_B
			// 
			this->Dodaj_B->Location = System::Drawing::Point(594, 41);
			this->Dodaj_B->Name = L"Dodaj_B";
			this->Dodaj_B->Size = System::Drawing::Size(75, 23);
			this->Dodaj_B->TabIndex = 1;
			this->Dodaj_B->Text = L"Dodaj";
			this->Dodaj_B->UseVisualStyleBackColor = true;
			this->Dodaj_B->Click += gcnew System::EventHandler(this, &MyForm::Dodaj_B_Click);
			// 
			// zakoncz
			// 
			this->zakoncz->Location = System::Drawing::Point(480, 293);
			this->zakoncz->Name = L"zakoncz";
			this->zakoncz->Size = System::Drawing::Size(75, 23);
			this->zakoncz->TabIndex = 3;
			this->zakoncz->Text = L"Zakoncz";
			this->zakoncz->UseVisualStyleBackColor = true;
			// 
			// usun
			// 
			this->usun->Location = System::Drawing::Point(355, 293);
			this->usun->Name = L"usun";
			this->usun->Size = System::Drawing::Size(75, 23);
			this->usun->TabIndex = 4;
			this->usun->Text = L"Usun";
			this->usun->UseVisualStyleBackColor = true;
			this->usun->Click += gcnew System::EventHandler(this, &MyForm::usun_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(355, 44);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// tytul
			// 
			this->tytul->AutoSize = true;
			this->tytul->Location = System::Drawing::Point(154, 25);
			this->tytul->Name = L"tytul";
			this->tytul->Size = System::Drawing::Size(30, 13);
			this->tytul->TabIndex = 6;
			this->tytul->Text = L"Tytul";
			// 
			// termin
			// 
			this->termin->AutoSize = true;
			this->termin->Location = System::Drawing::Point(436, 25);
			this->termin->Name = L"termin";
			this->termin->Size = System::Drawing::Size(39, 13);
			this->termin->TabIndex = 7;
			this->termin->Text = L"Termin";
			// 
			// edytuj
			// 
			this->edytuj->Location = System::Drawing::Point(594, 293);
			this->edytuj->Name = L"edytuj";
			this->edytuj->Size = System::Drawing::Size(75, 23);
			this->edytuj->TabIndex = 8;
			this->edytuj->Text = L"Edytuj";
			this->edytuj->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(27, 96);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(291, 210);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(283, 184);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"W trakcie";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(283, 184);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Po terminie";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(283, 184);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Zakonczone";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(686, 363);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->edytuj);
			this->Controls->Add(this->termin);
			this->Controls->Add(this->tytul);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->usun);
			this->Controls->Add(this->zakoncz);
			this->Controls->Add(this->Dodaj_B);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Dodaj_B_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = textBox1->Text;

		// Get the selected tab
		TabPage^ selectedTab = tabControl1->SelectedTab;

		if (selectedTab != nullptr) {
			// Create a new CheckBox
			CheckBox^ checkBox = gcnew CheckBox();
			checkBox->Text = text;

			// Set the location based on the index
			int index = selectedTab->Controls->Count; // Index of the new checkbox
			int x = 10; // X-coordinate
			int y = 10 + index * 25; // Y-coordinate, increment by 25 for each new checkbox

			checkBox->Location = System::Drawing::Point(x, y);

			// Add the CheckBox to the selected tab
			selectedTab->Controls->Add(checkBox);

			// Clear the text in textBox1
			textBox1->Clear();
		}
	}


	public:
		void AddCheckBox(String^ text) {
			// Get the selected tab
			TabPage^ selectedTab = tabControl1->SelectedTab;

			if (selectedTab != nullptr) {
				// Create a new CheckBox
				CheckBox^ checkBox = gcnew CheckBox();
				checkBox->Text = text;

				// Set the location based on the index
				int index = selectedTab->Controls->Count; // Index of the new checkbox
				int x = 10; // X-coordinate
				int y = 10 + index * 25; // Y-coordinate, increment by 25 for each new checkbox

				checkBox->Location = System::Drawing::Point(x, y);

				// Add the CheckBox to the selected tab
				selectedTab->Controls->Add(checkBox);
			}
		}

	private: System::Void usun_Click(System::Object^ sender, System::EventArgs^ e) {
		TabPage^ selectedTab = tabControl1->SelectedTab;

		if (selectedTab != nullptr) {
			// Iterate through the controls on the selected tab
			for (int i = selectedTab->Controls->Count - 1; i >= 0; i--) {
				Control^ control = selectedTab->Controls[i];

				// Check if the control is a CheckBox
				if (CheckBox::typeid == control->GetType()) {
					CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);

					// Check if the CheckBox is checked
					if (checkBox->Checked) {
						// Remove the checked CheckBox
						selectedTab->Controls->RemoveAt(i);
					}
				}
			}
			rearrange_checkboxes(selectedTab);
		}
	}
		   /*
		   *@brief Naprawia kolejnosc taskow
		   */
	private: System::Void rearrange_checkboxes(TabPage^ tab) {
		// Reset the Y-coordinate for arranging checkboxes
		int y = 10;

		// Iterate through the controls on the tab
		for (int i = 0; i < tab->Controls->Count; i++) {
			Control^ control = tab->Controls[i];

			// Check if the control is a CheckBox
			if (CheckBox::typeid == control->GetType()) {
				CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);

				// Set the new location based on the index
				int x = 10; // X-coordinate remains constant
				checkBox->Location = System::Drawing::Point(x, y);

				// Increment Y-coordinate for the next checkbox
				y += 25;
			}
		}
	}

	};
}