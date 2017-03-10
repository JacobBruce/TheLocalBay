#pragma once

namespace TheLocalBay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::LinkLabel^  downDumpLink;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->downDumpLink = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Getting Started";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(473, 352);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(457, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"The Local Bay allows you to perform offline torrent searches. Before\r\nyou can run" 
				L" a search you will need to download the magnet dump files:";
			// 
			// downDumpLink
			// 
			this->downDumpLink->AutoSize = true;
			this->downDumpLink->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->downDumpLink->Location = System::Drawing::Point(12, 85);
			this->downDumpLink->Name = L"downDumpLink";
			this->downDumpLink->Size = System::Drawing::Size(363, 16);
			this->downDumpLink->TabIndex = 3;
			this->downDumpLink->TabStop = true;
			this->downDumpLink->Text = L"https://mega.nz/#F!tktzySBS!ndSEaK3Z-Uc3zvycQYxhJA";
			this->downDumpLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::downDumpLink_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(465, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Once you have aquired the dump file(s) adjust your settings accordingly.\r\nThe but" 
				L"ton in the bottom right corner lets you select a target dump file.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(151, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Search Queries";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 557);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->downDumpLink);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"HelpForm";
			this->Text = L"Help";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void downDumpLink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			System::Diagnostics::Process::Start("https://mega.nz/#F!tktzySBS!ndSEaK3Z-Uc3zvycQYxhJA");
		}
};
}
