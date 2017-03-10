#pragma once
#include <msclr\marshal_cppstd.h>
#include "Globals.h"
#include "SimpleIni.h"

namespace TheLocalBay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  FileDialog;
	protected: 

	protected: 


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  KATMagTxtBox;

	private: System::Windows::Forms::Button^  KATDlgBtn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  TBPDlgBtn;
	private: System::Windows::Forms::TextBox^  TPBMagTxtBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  BITDlgBtn;
	private: System::Windows::Forms::TextBox^  BITMagTxtBox;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->FileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->KATMagTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->KATDlgBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBPDlgBtn = (gcnew System::Windows::Forms::Button());
			this->TPBMagTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BITDlgBtn = (gcnew System::Windows::Forms::Button());
			this->BITMagTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// FileDialog
			// 
			this->FileDialog->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"KickassTorrents Magnet File Location:";
			// 
			// KATMagTxtBox
			// 
			this->KATMagTxtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->KATMagTxtBox->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->KATMagTxtBox->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->KATMagTxtBox->Location = System::Drawing::Point(12, 29);
			this->KATMagTxtBox->Name = L"KATMagTxtBox";
			this->KATMagTxtBox->Size = System::Drawing::Size(277, 21);
			this->KATMagTxtBox->TabIndex = 1;
			// 
			// KATDlgBtn
			// 
			this->KATDlgBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->KATDlgBtn->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->KATDlgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->KATDlgBtn->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->KATDlgBtn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->KATDlgBtn->Location = System::Drawing::Point(295, 29);
			this->KATDlgBtn->Name = L"KATDlgBtn";
			this->KATDlgBtn->Size = System::Drawing::Size(78, 21);
			this->KATDlgBtn->TabIndex = 2;
			this->KATDlgBtn->Text = L"Browse ...";
			this->KATDlgBtn->UseVisualStyleBackColor = true;
			this->KATDlgBtn->Click += gcnew System::EventHandler(this, &SettingsForm::KATDlgBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Location = System::Drawing::Point(9, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ThePirateBay Magnet File Location:";
			// 
			// TBPDlgBtn
			// 
			this->TBPDlgBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->TBPDlgBtn->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->TBPDlgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TBPDlgBtn->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TBPDlgBtn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->TBPDlgBtn->Location = System::Drawing::Point(295, 77);
			this->TBPDlgBtn->Name = L"TBPDlgBtn";
			this->TBPDlgBtn->Size = System::Drawing::Size(78, 21);
			this->TBPDlgBtn->TabIndex = 5;
			this->TBPDlgBtn->Text = L"Browse ...";
			this->TBPDlgBtn->UseVisualStyleBackColor = true;
			this->TBPDlgBtn->Click += gcnew System::EventHandler(this, &SettingsForm::TBPDlgBtn_Click);
			// 
			// TPBMagTxtBox
			// 
			this->TPBMagTxtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->TPBMagTxtBox->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TPBMagTxtBox->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->TPBMagTxtBox->Location = System::Drawing::Point(12, 77);
			this->TPBMagTxtBox->Name = L"TPBMagTxtBox";
			this->TPBMagTxtBox->Size = System::Drawing::Size(277, 21);
			this->TPBMagTxtBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Location = System::Drawing::Point(9, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Bitsnoop Magnet File Location:";
			// 
			// BITDlgBtn
			// 
			this->BITDlgBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BITDlgBtn->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->BITDlgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BITDlgBtn->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BITDlgBtn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->BITDlgBtn->Location = System::Drawing::Point(295, 125);
			this->BITDlgBtn->Name = L"BITDlgBtn";
			this->BITDlgBtn->Size = System::Drawing::Size(78, 21);
			this->BITDlgBtn->TabIndex = 8;
			this->BITDlgBtn->Text = L"Browse ...";
			this->BITDlgBtn->UseVisualStyleBackColor = true;
			this->BITDlgBtn->Click += gcnew System::EventHandler(this, &SettingsForm::BITDlgBtn_Click);
			// 
			// BITMagTxtBox
			// 
			this->BITMagTxtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->BITMagTxtBox->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BITMagTxtBox->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->BITMagTxtBox->Location = System::Drawing::Point(12, 125);
			this->BITMagTxtBox->Name = L"BITMagTxtBox";
			this->BITMagTxtBox->Size = System::Drawing::Size(277, 21);
			this->BITMagTxtBox->TabIndex = 7;
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 159);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BITDlgBtn);
			this->Controls->Add(this->BITMagTxtBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TBPDlgBtn);
			this->Controls->Add(this->TPBMagTxtBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->KATDlgBtn);
			this->Controls->Add(this->KATMagTxtBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"SettingsForm";
			this->Text = L"Settings";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SettingsForm::SettingsForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void KATDlgBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (FileDialog->ShowDialog() == Windows::Forms::DialogResult::OK) {
				KATMagTxtBox->Text = FileDialog->FileName;
			}
		}

		private: System::Void TBPDlgBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (FileDialog->ShowDialog() == Windows::Forms::DialogResult::OK) {
				TPBMagTxtBox->Text = FileDialog->FileName;
			}
		}

		private: System::Void BITDlgBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (FileDialog->ShowDialog() == Windows::Forms::DialogResult::OK) {
				BITMagTxtBox->Text = FileDialog->FileName;
			}
		}

		private: System::Void SettingsForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 CSimpleIniA ini;
			 ini.SetUnicode();
			 ini.LoadFile(GLOBALS::ini_file.c_str());

			 GLOBALS::kat_source = msclr::interop::marshal_as<std::string>(KATMagTxtBox->Text);
			 GLOBALS::tpb_source = msclr::interop::marshal_as<std::string>(TPBMagTxtBox->Text);
			 GLOBALS::bit_source = msclr::interop::marshal_as<std::string>(BITMagTxtBox->Text);

			 ini.SetValue("Search", "kat_source", GLOBALS::kat_source.c_str());
			 ini.SetValue("Search", "tpb_source", GLOBALS::tpb_source.c_str());
			 ini.SetValue("Search", "bit_source", GLOBALS::bit_source.c_str());

			 ini.SaveFile(GLOBALS::ini_file.c_str());
		}

		private: System::Void SettingsForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 CSimpleIniA ini;
			 ini.SetUnicode();
			 ini.LoadFile(GLOBALS::ini_file.c_str());

			 KATMagTxtBox->Text = %System::String(ini.GetValue("Search", "kat_source", ""));
			 TPBMagTxtBox->Text = %System::String(ini.GetValue("Search", "tpb_source", ""));
			 BITMagTxtBox->Text = %System::String(ini.GetValue("Search", "bit_source", ""));
		}
};
}
