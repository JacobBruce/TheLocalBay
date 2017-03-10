#pragma once

namespace TheLocalBay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  productName;
	private: System::Windows::Forms::Label^  versionText;
	private: System::Windows::Forms::Label^  copyrightText;
	private: System::Windows::Forms::Label^  companyName;
	private: System::Windows::Forms::TextBox^  infoTextBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::LinkLabel^  donateLink;


	protected: 




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->productName = (gcnew System::Windows::Forms::Label());
			this->versionText = (gcnew System::Windows::Forms::Label());
			this->copyrightText = (gcnew System::Windows::Forms::Label());
			this->companyName = (gcnew System::Windows::Forms::Label());
			this->infoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->donateLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// productName
			// 
			this->productName->AutoSize = true;
			this->productName->Location = System::Drawing::Point(12, 18);
			this->productName->Name = L"productName";
			this->productName->Size = System::Drawing::Size(76, 13);
			this->productName->TabIndex = 0;
			this->productName->Text = L"The Local Bay";
			// 
			// versionText
			// 
			this->versionText->AutoSize = true;
			this->versionText->Location = System::Drawing::Point(12, 39);
			this->versionText->Name = L"versionText";
			this->versionText->Size = System::Drawing::Size(72, 13);
			this->versionText->TabIndex = 1;
			this->versionText->Text = L"Version: 0.0.0";
			// 
			// copyrightText
			// 
			this->copyrightText->AutoSize = true;
			this->copyrightText->Location = System::Drawing::Point(129, 18);
			this->copyrightText->Name = L"copyrightText";
			this->copyrightText->Size = System::Drawing::Size(117, 13);
			this->copyrightText->TabIndex = 2;
			this->copyrightText->Text = L"Copyright © 2012-2017";
			// 
			// companyName
			// 
			this->companyName->AutoSize = true;
			this->companyName->Location = System::Drawing::Point(129, 39);
			this->companyName->Name = L"companyName";
			this->companyName->Size = System::Drawing::Size(87, 13);
			this->companyName->TabIndex = 3;
			this->companyName->Text = L"BITFREAK.INFO";
			// 
			// infoTextBox
			// 
			this->infoTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->infoTextBox->Location = System::Drawing::Point(12, 69);
			this->infoTextBox->Multiline = true;
			this->infoTextBox->Name = L"infoTextBox";
			this->infoTextBox->ReadOnly = true;
			this->infoTextBox->Size = System::Drawing::Size(234, 86);
			this->infoTextBox->TabIndex = 4;
			this->infoTextBox->TabStop = false;
			this->infoTextBox->Text = resources->GetString(L"infoTextBox.Text");
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Donate BTC:";
			// 
			// donateLink
			// 
			this->donateLink->AutoSize = true;
			this->donateLink->Location = System::Drawing::Point(12, 183);
			this->donateLink->Name = L"donateLink";
			this->donateLink->Size = System::Drawing::Size(234, 13);
			this->donateLink->TabIndex = 5;
			this->donateLink->TabStop = true;
			this->donateLink->Text = L"17crGNM9S5ePuWynj1RwHBH9BemHUFNqxg";
			this->donateLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::donateLink_LinkClicked);
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(258, 208);
			this->Controls->Add(this->donateLink);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->infoTextBox);
			this->Controls->Add(this->companyName);
			this->Controls->Add(this->copyrightText);
			this->Controls->Add(this->versionText);
			this->Controls->Add(this->productName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AboutForm";
			this->Text = L"About The Local Bay";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void AboutForm_Load(System::Object^  sender, System::EventArgs^  e) {
			companyName->Text = Application::CompanyName;
			productName->Text = Application::ProductName;
			versionText->Text = "Version " + Application::ProductVersion;
		}

		private: System::Void donateLink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			System::Diagnostics::Process::Start("bitcoin:17crGNM9S5ePuWynj1RwHBH9BemHUFNqxg?label=TLB%20Donation");
		}
};
}
