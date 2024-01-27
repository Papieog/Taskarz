#pragma once
#include "DodajForm.h"
#include <iostream>
#include <fstream>
#include <string>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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

	private: System::Windows::Forms::Button^ Dodaj_B;
	protected:


	private: System::Windows::Forms::Button^ zakoncz;

	private: System::Windows::Forms::Button^ usun;
	private: System::Windows::Forms::Button^ zapisz;










	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ wczytaj;
	private: System::Windows::Forms::Button^ edytuj;







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
			this->Dodaj_B = (gcnew System::Windows::Forms::Button());
			this->zakoncz = (gcnew System::Windows::Forms::Button());
			this->usun = (gcnew System::Windows::Forms::Button());
			this->zapisz = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->wczytaj = (gcnew System::Windows::Forms::Button());
			this->edytuj = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Dodaj_B
			// 
			this->Dodaj_B->Location = System::Drawing::Point(27, 293);
			this->Dodaj_B->Name = L"Dodaj_B";
			this->Dodaj_B->Size = System::Drawing::Size(75, 23);
			this->Dodaj_B->TabIndex = 1;
			this->Dodaj_B->Text = L"Dodaj";
			this->Dodaj_B->UseVisualStyleBackColor = true;
			this->Dodaj_B->Click += gcnew System::EventHandler(this, &MyForm::Dodaj_B_Click);
			// 
			// zakoncz
			// 
			this->zakoncz->Location = System::Drawing::Point(581, 293);
			this->zakoncz->Name = L"zakoncz";
			this->zakoncz->Size = System::Drawing::Size(75, 23);
			this->zakoncz->TabIndex = 3;
			this->zakoncz->Text = L"Zakoncz";
			this->zakoncz->UseVisualStyleBackColor = true;
			this->zakoncz->Click += gcnew System::EventHandler(this, &MyForm::zakoncz_Click);
			// 
			// usun
			// 
			this->usun->Location = System::Drawing::Point(472, 293);
			this->usun->Name = L"usun";
			this->usun->Size = System::Drawing::Size(75, 23);
			this->usun->TabIndex = 4;
			this->usun->Text = L"Usun";
			this->usun->UseVisualStyleBackColor = true;
			this->usun->Click += gcnew System::EventHandler(this, &MyForm::usun_Click);
			// 
			// zapisz
			// 
			this->zapisz->Location = System::Drawing::Point(243, 293);
			this->zapisz->Name = L"zapisz";
			this->zapisz->Size = System::Drawing::Size(75, 23);
			this->zapisz->TabIndex = 8;
			this->zapisz->Text = L"Zapisz";
			this->zapisz->UseVisualStyleBackColor = true;
			this->zapisz->Click += gcnew System::EventHandler(this, &MyForm::zapisz_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(27, 44);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(291, 239);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(283, 213);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"W trakcie";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(283, 213);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Po terminie";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(283, 213);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Zakonczone";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(355, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 173);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(419, 259);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 20);
			this->textBox2->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(355, 259);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Termin:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(355, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Opis:";
			// 
			// wczytaj
			// 
			this->wczytaj->Location = System::Drawing::Point(138, 293);
			this->wczytaj->Name = L"wczytaj";
			this->wczytaj->Size = System::Drawing::Size(75, 23);
			this->wczytaj->TabIndex = 20;
			this->wczytaj->Text = L"Wczytaj";
			this->wczytaj->UseVisualStyleBackColor = true;
			this->wczytaj->Click += gcnew System::EventHandler(this, &MyForm::wczytaj_Click);
			// 
			// edytuj
			// 
			this->edytuj->Location = System::Drawing::Point(358, 293);
			this->edytuj->Name = L"edytuj";
			this->edytuj->Size = System::Drawing::Size(75, 23);
			this->edytuj->TabIndex = 21;
			this->edytuj->Text = L"Edytuj";
			this->edytuj->UseVisualStyleBackColor = true;
			this->edytuj->Click += gcnew System::EventHandler(this, &MyForm::edytuj_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(686, 363);
			this->Controls->Add(this->edytuj);
			this->Controls->Add(this->wczytaj);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->zapisz);
			this->Controls->Add(this->usun);
			this->Controls->Add(this->zakoncz);
			this->Controls->Add(this->Dodaj_B);
			this->Name = L"MyForm";
			this->Text = L"Zadaniarz";
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//MessageBox::Show("gui.Popup");
/*
*@brief Otwiera formatke do dodania taska
*/
private: System::Void Dodaj_B_Click(System::Object^ sender, System::EventArgs^ e) {
	TabPage^ selectedTab = tabPage1;
	Project::DodajForm dodajForm;

	if (dodajForm.ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ taskTitle = dodajForm.tytul;
		String^ opis = dodajForm.opis;
		DateTime termin = dodajForm.termin;
		DateTime today = DateTime::Today;

		if (DateTime::Compare(termin, today) < 0) {selectedTab = tabPage2;}

		if (!String::IsNullOrEmpty(taskTitle)) {AddCheckBox(taskTitle, selectedTab, opis, termin, false);}
	}
}
private: CheckBox^ lastSelectedCheckBox;
/*
*@brief Wyswietla opis
*/
private: System::Void checkBox_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ clickedCheckBox = dynamic_cast<CheckBox^>(sender);

	if (clickedCheckBox != nullptr) {
		lastSelectedCheckBox = clickedCheckBox;
		array<Object^>^ tagValues = dynamic_cast<array<Object^>^>(clickedCheckBox->Tag);

		if (tagValues != nullptr && tagValues->Length == 2) {
			textBox1->Text = tagValues[0]->ToString();
			textBox2->Text = (dynamic_cast<DateTime^>(tagValues[1]))->ToString("yyyy-MM-dd");
		}
	}
}	   
/*
*@brief Dodaje taska
*/
private: System::Void AddCheckBox(String^ text, TabPage^ selectedTab, String^ opis, DateTime^ termin, bool zakonczone) {
	if (selectedTab != nullptr) {
		CheckBox^ checkBox = gcnew CheckBox();
		checkBox->Text = text;
		checkBox->Width = 250;
		int index = selectedTab->Controls->Count;
		int x = 10;
		int y = 10 + index * 20;

		checkBox->Location = System::Drawing::Point(x, y);

		array<Object^>^ tagValues = gcnew array<Object^> { opis, termin };
		checkBox->Tag = tagValues;

		selectedTab->Controls->Add(checkBox);

		checkBox->Click += gcnew System::EventHandler(this, &MyForm::checkBox_Click);

		if (zakonczone) {
			tabPage3->Controls->Add(checkBox);
			checkBox->Location = System::Drawing::Point(10, tabPage3->Controls->Count * 25);
		}
	}
}
/*
*@brief Usuwa zaznaczone taski
*/
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
			y += 20;
		}
	}
}
/*
*@brief Przenosi taska na tabgroup3 (zakonczone)
*/
private: System::Void zakoncz_Click(System::Object^ sender, System::EventArgs^ e) {
	TabPage^ selectedTab = tabControl1->SelectedTab;

	if (selectedTab != nullptr) {
		for (int i = selectedTab->Controls->Count - 1; i >= 0; i--) {
			Control^ control = selectedTab->Controls[i];

			if (CheckBox::typeid == control->GetType()) {
				CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);

				if (checkBox->Checked && selectedTab != tabPage3) {
					selectedTab->Controls->RemoveAt(i);
					tabPage3->Controls->Add(checkBox);
					checkBox->Location = System::Drawing::Point(10, tabPage3->Controls->Count * 25);
					checkBox->Checked = false;
				}
			}
		}
		rearrange_checkboxes(tabPage1);
		rearrange_checkboxes(tabPage2);
		rearrange_checkboxes(tabPage3);
	}
}
/*
*@brief Zapisuje taski do pliku tekstowego
*/
private: System::Void SaveCheckboxesToFile(String^ filePath) {
	StreamWriter^ writer = gcnew StreamWriter(filePath, false, System::Text::Encoding::UTF8);

	for each (TabPage ^ tab in tabControl1->TabPages) {
		for each (Control ^ control in tab->Controls) {
			if (CheckBox::typeid == control->GetType()) {
				CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);
				array<Object^>^ tagValues = dynamic_cast<array<Object^>^>(checkBox->Tag);

				if (tagValues != nullptr && tagValues->Length == 2) {
					// Replace line breaks with a placeholder (e.g., "|LB|")
					String^ description = (tagValues[0]->ToString())->Replace(Environment::NewLine, "|LB|");
					writer->WriteLine(checkBox->Text + "|" + description + "|" + (dynamic_cast<DateTime^>(tagValues[1]))->ToString("yyyy-MM-dd") + "|" + (tab == tabPage3));
				}
			}
		}
	}

	writer->Close();
}
/*
*@brief Wyswietla okienko do zapisu pliku
*/
private: System::Void zapisz_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text Files|*.txt";
	saveFileDialog->Title = "Zapisz do pliku";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		SaveCheckboxesToFile(saveFileDialog->FileName);
	}
}
/*
*@brief Wyswietla okienko i wczytuje plik
*/
private: System::Void wczytaj_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
    openFileDialog->Filter = "Text Files|*.txt";
    openFileDialog->Title = "Wczytaj plik";

    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ filePath = openFileDialog->FileName;
        array<String^>^ lines = File::ReadAllLines(filePath, System::Text::Encoding::UTF8);

        for each (String ^ line in lines) {
            array<String^>^ values = line->Split('|');
            if (values->Length == 4) {
                String^ title = values[0];
                String^ description = values[1]->Replace("|LB|", Environment::NewLine);
                DateTime termin = DateTime::ParseExact(values[2], "yyyy-MM-dd", nullptr);
                bool isFinished = Convert::ToBoolean(values[3]);
                TabPage^ selectedTab = tabPage1;

				if (isFinished) {selectedTab = tabPage3;}

				else {
					DateTime today = DateTime::Today;
					if (DateTime::Compare(termin, today) < 0) {selectedTab = tabPage2;}
				}

				AddCheckBox(title, selectedTab, description, termin, isFinished);
			}
		}
	}
}
/*
*@brief Wyswietla formatke dodawania taska ale go edytuje
*/
private: System::Void edytuj_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lastSelectedCheckBox != nullptr) {
		array<Object^>^ tagValues = dynamic_cast<array<Object^>^>(lastSelectedCheckBox->Tag);

		if (tagValues != nullptr && tagValues->Length == 2) {
			String^ taskTitle = lastSelectedCheckBox->Text;
			String^ opis = tagValues[0]->ToString();
			DateTime termin = *dynamic_cast<DateTime^>(tagValues[1]);
			TabPage^ selectedTab = tabPage1;
			DateTime today = DateTime::Today;
			Project::DodajForm dodajForm(taskTitle, opis, termin);

			if (dodajForm.ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				lastSelectedCheckBox->Text = dodajForm.tytul;
				lastSelectedCheckBox->Tag = gcnew array<Object^> { dodajForm.opis, dodajForm.termin };
				array<Object^>^ tagValues = dynamic_cast<array<Object^>^>(lastSelectedCheckBox->Tag);
				DateTime termin = *dynamic_cast<DateTime^>(tagValues[1]);

				if (DateTime::Compare(termin, today) < 0) {selectedTab = tabPage2;}

				else {selectedTab = tabPage1;}

				selectedTab->Controls->Add(lastSelectedCheckBox);
				rearrange_checkboxes(selectedTab);
			}
		}
	}
}
};
}