#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include "Globals.h"
#include "ExtFuncs.h"
#include "SimpleIni.h"
#include "AboutForm.h"
#include "HelpForm.h"
#include "SettingsForm.h"

namespace TheLocalBay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			resManager = gcnew Resources::ResourceManager(L"TheLocalBay.Strings", this->GetType()->Assembly);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuBtn;
	protected: 

	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuBtn;

	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuBtn;

	private: System::Windows::Forms::ToolStripMenuItem^  magnetGrabberToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuBtn;

	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  StatusLabel;
	private: System::Windows::Forms::ToolStripProgressBar^  ProgressBar;

	private: System::Windows::Forms::ToolStripDropDownButton^  sourceSelectButton;
	private: System::Windows::Forms::ToolStripMenuItem^  bitsnoopToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thePirateBayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kickAssTorrentsToolStripMenuItem;


	private: System::Windows::Forms::Button^  SearchBtn;
	private: System::Windows::Forms::TextBox^  SearchBox;
	private: System::Windows::Forms::WebBrowser^  Browser;
	private: System::Windows::Forms::Timer^  StatusTimer;
	private: System::Windows::Forms::Panel^  CatPanel;
	private: System::Windows::Forms::Button^  CatBtn;


	private: System::ComponentModel::BackgroundWorker^  KATWorker;
	private: System::ComponentModel::BackgroundWorker^  TPBWorker;
	private: System::ComponentModel::BackgroundWorker^  BITWorker;
	private: System::ComponentModel::IContainer^  components;

	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;

	private: Resources::ResourceManager^ resManager;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: int64_t MagFileSize, MagFilePos, LastMFP;
	private: uint32_t ResultCnt, LastMCI;
	private: bool resumeSearch, autoStopped;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripSpring;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->magnetGrabberToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuBtn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ProgressBar = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripSpring = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->sourceSelectButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->bitsnoopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thePirateBayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kickAssTorrentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SearchBtn = (gcnew System::Windows::Forms::Button());
			this->SearchBox = (gcnew System::Windows::Forms::TextBox());
			this->Browser = (gcnew System::Windows::Forms::WebBrowser());
			this->StatusTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->KATWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->TPBWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->BITWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->CatPanel = (gcnew System::Windows::Forms::Panel());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->CatBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->CatPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuBtn, 
				this->editToolStripMenuBtn, this->toolsToolStripMenuBtn, this->helpToolStripMenuBtn});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(763, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuBtn
			// 
			this->fileToolStripMenuBtn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuBtn->Name = L"fileToolStripMenuBtn";
			this->fileToolStripMenuBtn->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuBtn->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuBtn
			// 
			this->editToolStripMenuBtn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->settingsToolStripMenuItem});
			this->editToolStripMenuBtn->Name = L"editToolStripMenuBtn";
			this->editToolStripMenuBtn->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuBtn->Text = L"Edit";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::settingsToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuBtn
			// 
			this->toolsToolStripMenuBtn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->magnetGrabberToolStripMenuItem});
			this->toolsToolStripMenuBtn->Name = L"toolsToolStripMenuBtn";
			this->toolsToolStripMenuBtn->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuBtn->Text = L"Tools";
			// 
			// magnetGrabberToolStripMenuItem
			// 
			this->magnetGrabberToolStripMenuItem->Name = L"magnetGrabberToolStripMenuItem";
			this->magnetGrabberToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->magnetGrabberToolStripMenuItem->Text = L"Magnet Grabber";
			this->magnetGrabberToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::magnetGrabberToolStripMenuItem_Click);
			// 
			// helpToolStripMenuBtn
			// 
			this->helpToolStripMenuBtn->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->helpToolStripMenuItem, 
				this->aboutToolStripMenuItem});
			this->helpToolStripMenuBtn->Name = L"helpToolStripMenuBtn";
			this->helpToolStripMenuBtn->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuBtn->Text = L"Help";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->helpToolStripMenuItem->Text = L"Usage";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::helpToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->ProgressBar, this->StatusLabel, 
				this->toolStripSpring, this->sourceSelectButton});
			this->statusStrip1->Location = System::Drawing::Point(0, 509);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(763, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// StatusLabel
			// 
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Size = System::Drawing::Size(26, 17);
			this->StatusLabel->Text = L"Idle";
			// 
			// ProgressBar
			// 
			this->ProgressBar->Name = L"ProgressBar";
			this->ProgressBar->Size = System::Drawing::Size(100, 16);
			this->ProgressBar->Step = 1;
			this->ProgressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			// 
			// toolStripSpring
			// 
			this->toolStripSpring->Name = L"toolStripSpring";
			this->toolStripSpring->Size = System::Drawing::Size(103, 17);
			this->toolStripSpring->Text = L"                                ";
			// 
			// sourceSelectButton
			// 
			this->sourceSelectButton->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->sourceSelectButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->sourceSelectButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->bitsnoopToolStripMenuItem, 
				this->thePirateBayToolStripMenuItem, this->kickAssTorrentsToolStripMenuItem});
			this->sourceSelectButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sourceSelectButton.Image")));
			this->sourceSelectButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->sourceSelectButton->Name = L"sourceSelectButton";
			this->sourceSelectButton->Size = System::Drawing::Size(89, 20);
			this->sourceSelectButton->Text = L"Source: none";
			this->sourceSelectButton->TextChanged += gcnew System::EventHandler(this, &MainForm::sourceSelectButton_TextChanged);
			// 
			// bitsnoopToolStripMenuItem
			// 
			this->bitsnoopToolStripMenuItem->Name = L"bitsnoopToolStripMenuItem";
			this->bitsnoopToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->bitsnoopToolStripMenuItem->Text = L"Bitsnoop";
			this->bitsnoopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::bitsnoopToolStripMenuItem_Click);
			// 
			// thePirateBayToolStripMenuItem
			// 
			this->thePirateBayToolStripMenuItem->Name = L"thePirateBayToolStripMenuItem";
			this->thePirateBayToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->thePirateBayToolStripMenuItem->Text = L"ThePirateBay";
			this->thePirateBayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::thePirateBayToolStripMenuItem_Click);
			// 
			// kickAssTorrentsToolStripMenuItem
			// 
			this->kickAssTorrentsToolStripMenuItem->Name = L"kickAssTorrentsToolStripMenuItem";
			this->kickAssTorrentsToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->kickAssTorrentsToolStripMenuItem->Text = L"KickassTorrents";
			this->kickAssTorrentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::kickAssTorrentsToolStripMenuItem_Click);
			// 
			// SearchBtn
			// 
			this->SearchBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->SearchBtn->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->SearchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchBtn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->SearchBtn->Location = System::Drawing::Point(666, 25);
			this->SearchBtn->Name = L"SearchBtn";
			this->SearchBtn->Size = System::Drawing::Size(74, 21);
			this->SearchBtn->TabIndex = 1;
			this->SearchBtn->Text = L"SEARCH";
			this->SearchBtn->UseVisualStyleBackColor = true;
			this->SearchBtn->Click += gcnew System::EventHandler(this, &MainForm::SearchBtn_Click);
			this->SearchBtn->Enter += gcnew System::EventHandler(this, &MainForm::SearchBtn_Enter);
			// 
			// SearchBox
			// 
			this->SearchBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->SearchBox->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchBox->ForeColor = System::Drawing::Color::SlateGray;
			this->SearchBox->Location = System::Drawing::Point(0, 25);
			this->SearchBox->MaxLength = 1024;
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Size = System::Drawing::Size(666, 21);
			this->SearchBox->TabIndex = 0;
			this->SearchBox->TextChanged += gcnew System::EventHandler(this, &MainForm::SearchBox_TextChanged);
			this->SearchBox->Enter += gcnew System::EventHandler(this, &MainForm::SearchBox_Enter);
			this->SearchBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyDown);
			// 
			// Browser
			// 
			this->Browser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->Browser->Location = System::Drawing::Point(0, 47);
			this->Browser->MinimumSize = System::Drawing::Size(20, 20);
			this->Browser->Name = L"Browser";
			this->Browser->Size = System::Drawing::Size(763, 461);
			this->Browser->TabIndex = 2;
			this->Browser->Url = (gcnew System::Uri(L"about:blank", System::UriKind::Absolute));
			this->Browser->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MainForm::Browser_DocumentCompleted);
			// 
			// StatusTimer
			// 
			this->StatusTimer->Interval = 250;
			this->StatusTimer->Tick += gcnew System::EventHandler(this, &MainForm::StatusTimer_Tick);
			// 
			// KATWorker
			// 
			this->KATWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MainForm::KATWorker_DoWork);
			this->KATWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MainForm::KATWorker_RunWorkerCompleted);
			// 
			// TPBWorker
			// 
			this->TPBWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MainForm::TPBWorker_DoWork);
			this->TPBWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MainForm::TPBWorker_RunWorkerCompleted);
			// 
			// BITWorker
			// 
			this->BITWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MainForm::BITWorker_DoWork);
			this->BITWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MainForm::BITWorker_RunWorkerCompleted);
			// 
			// CatPanel
			// 
			this->CatPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CatPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CatPanel->Controls->Add(this->checkBox11);
			this->CatPanel->Controls->Add(this->checkBox9);
			this->CatPanel->Controls->Add(this->checkBox10);
			this->CatPanel->Controls->Add(this->checkBox8);
			this->CatPanel->Controls->Add(this->checkBox7);
			this->CatPanel->Controls->Add(this->checkBox6);
			this->CatPanel->Controls->Add(this->checkBox5);
			this->CatPanel->Controls->Add(this->checkBox4);
			this->CatPanel->Controls->Add(this->checkBox3);
			this->CatPanel->Controls->Add(this->checkBox2);
			this->CatPanel->Controls->Add(this->checkBox1);
			this->CatPanel->Controls->Add(this->shapeContainer1);
			this->CatPanel->Location = System::Drawing::Point(612, 46);
			this->CatPanel->Name = L"CatPanel";
			this->CatPanel->Size = System::Drawing::Size(151, 153);
			this->CatPanel->TabIndex = 5;
			this->CatPanel->Visible = false;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(32, 130);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(96, 17);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->Text = L"Case Sensitive";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox11_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(80, 98);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(52, 17);
			this->checkBox9->TabIndex = 9;
			this->checkBox9->Text = L"Other";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(4, 98);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(47, 17);
			this->checkBox10->TabIndex = 8;
			this->checkBox10->Text = L"XXX";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox10_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(80, 75);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(56, 17);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"Books";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox8_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(80, 52);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(54, 17);
			this->checkBox7->TabIndex = 6;
			this->checkBox7->Text = L"Music";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(80, 29);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(59, 17);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Games";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(80, 6);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(50, 17);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Apps";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(4, 75);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(55, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Anime";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(4, 52);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(40, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"TV";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(4, 29);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Movies";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(4, 6);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(37, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"All";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(149, 151);
			this->shapeContainer1->TabIndex = 11;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::Color::LightGray;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 5;
			this->lineShape1->X2 = 143;
			this->lineShape1->Y1 = 123;
			this->lineShape1->Y2 = 123;
			// 
			// CatBtn
			// 
			this->CatBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->CatBtn->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->CatBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CatBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CatBtn->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->CatBtn->Location = System::Drawing::Point(739, 25);
			this->CatBtn->Name = L"CatBtn";
			this->CatBtn->Size = System::Drawing::Size(24, 21);
			this->CatBtn->TabIndex = 6;
			this->CatBtn->Text = L"▼";
			this->CatBtn->UseVisualStyleBackColor = true;
			this->CatBtn->Click += gcnew System::EventHandler(this, &MainForm::CatBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 531);
			this->Controls->Add(this->CatBtn);
			this->Controls->Add(this->CatPanel);
			this->Controls->Add(this->SearchBtn);
			this->Controls->Add(this->SearchBox);
			this->Controls->Add(this->Browser);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"The Local Bay";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->CatPanel->ResumeLayout(false);
			this->CatPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void disableCatSelect() {
			checkBox1->Enabled = false;
			checkBox2->Enabled = false;
			checkBox3->Enabled = false;
			checkBox4->Enabled = false;
			checkBox5->Enabled = false;
			checkBox6->Enabled = false;
			checkBox7->Enabled = false;
			checkBox8->Enabled = false;
			checkBox9->Enabled = false;
			checkBox10->Enabled = false;
		}

		private: System::Void enableCatSelect() {
			checkBox1->Enabled = true;
			checkBox2->Enabled = true;
			checkBox3->Enabled = true;
			checkBox4->Enabled = true;
			checkBox5->Enabled = true;
			checkBox6->Enabled = true;
			checkBox7->Enabled = true;
			checkBox8->Enabled = true;
			checkBox9->Enabled = true;
			checkBox10->Enabled = true;
		}

		private: System::Void SetDocColors() {
			Browser->Document->LinkColor = Color::DarkSlateGray;
			Browser->Document->ActiveLinkColor = Color::DarkSlateGray;
			Browser->Document->VisitedLinkColor = Color::DarkSlateGray;
			Browser->Document->ForeColor = Color::DarkSlateGray;
			Browser->Document->BackColor = Color::White;
		}

		private: System::Void PerformSearch(const bool resume) {

			System::String^ search_query = SearchBox->Text->Trim(' ');

			if (search_query == "") {

				MessageBox::Show("The search box is empty!", "ERROR", MessageBoxButtons::OK);

			} else if (GLOBALS::search_source == "N/A") {

				MessageBox::Show("No source file selected!", "ERROR", MessageBoxButtons::OK);

			} else {

				if (resume || MessageBox::Show("Search for: " + search_query + "?", "Confirm Action", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
						
					//GLOBALS::html_backup = msclr::interop::marshal_as<std::string>(Browser->Document->Body->InnerHtml);
					Browser->Document->Body->InnerHtml = resManager->GetString("SearchingHtml");
					SearchBtn->Text = "STOP";

					ResultCnt = 0;
					MagFilePos = 0;

					GLOBALS::stop_search = false;
					autoStopped = false;

					GLOBALS::cat_checked[0] = checkBox1->Checked;
					GLOBALS::cat_checked[1] = checkBox2->Checked;
					GLOBALS::cat_checked[2] = checkBox3->Checked;
					GLOBALS::cat_checked[3] = checkBox4->Checked;
					GLOBALS::cat_checked[4] = checkBox5->Checked;
					GLOBALS::cat_checked[5] = checkBox6->Checked;
					GLOBALS::cat_checked[6] = checkBox7->Checked;
					GLOBALS::cat_checked[7] = checkBox8->Checked;
					GLOBALS::cat_checked[8] = checkBox9->Checked;
					GLOBALS::cat_checked[9] = checkBox10->Checked;

					if (kickAssTorrentsToolStripMenuItem->Checked == true) {
						if (FileExists(GLOBALS::kat_source)) {
							StatusTimer->Start();
							MagFileSize = FileSize(GLOBALS::kat_source);
							KATWorker->RunWorkerAsync(search_query);
						} else {
							MessageBox::Show(resManager->GetString("FileNotFound"), "ERROR", MessageBoxButtons::OK);
						}
					} else if (thePirateBayToolStripMenuItem->Checked == true) {
						if (FileExists(GLOBALS::tpb_source)) {
							StatusTimer->Start();
							MagFileSize = FileSize(GLOBALS::tpb_source);
							TPBWorker->RunWorkerAsync(search_query);
						} else {
							MessageBox::Show(resManager->GetString("FileNotFound"), "ERROR", MessageBoxButtons::OK);
						}
					} else {
						if (FileExists(GLOBALS::bit_source)) {
							StatusTimer->Start();
							MagFileSize = FileSize(GLOBALS::bit_source);
							BITWorker->RunWorkerAsync(search_query);
						} else {
							MessageBox::Show(resManager->GetString("FileNotFound"), "ERROR", MessageBoxButtons::OK);
						}
					}
				}
			}
		}

		private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			if (GLOBALS::search_source == "KAT") {
				kickAssTorrentsToolStripMenuItem->PerformClick();
			} else if (GLOBALS::search_source == "TPB") {
				thePirateBayToolStripMenuItem->PerformClick();
			} else if (GLOBALS::search_source == "BIT") {
				bitsnoopToolStripMenuItem->PerformClick();
			} else {
				disableCatSelect();
				GLOBALS::search_source = "N/A";
			}
			toolStripSpring->Text = System::String::Empty;
			toolStripSpring->Spring = true;
		}

		private: System::Void MainForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			CSimpleIniA ini;
			ini.SetUnicode();
			ini.LoadFile(GLOBALS::ini_file.c_str());

			ini.SetValue("Search", "search_source", GLOBALS::search_source.c_str());

			ini.SaveFile(GLOBALS::ini_file.c_str());
		}

		private: System::Void SearchBtn_Click(System::Object^  sender, System::EventArgs^  e) {

			if (SearchBtn->Text == "STOP") {

				if (KATWorker->IsBusy) {
					GLOBALS::stop_search = true;
				} else if (TPBWorker->IsBusy) {
					GLOBALS::stop_search = true;
				} else if (BITWorker->IsBusy) {
					GLOBALS::stop_search = true;
				}

			} else if (SearchBtn->Text == "RESUME") {

				resumeSearch = true;
				PerformSearch(true);

			} else if (SearchBtn->Text == "MORE") {

				resumeSearch = true;
				PerformSearch(true);

			} else if (SearchBtn->Text == "SEARCH") {

				resumeSearch = false;
				PerformSearch(false);
			}
		}
	
		private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter) {
				 SearchBtn->PerformClick();
			 }
		}

		private: System::Void bitsnoopToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!bitsnoopToolStripMenuItem->Checked) {
				enableCatSelect();
				bitsnoopToolStripMenuItem->Checked = true;
				kickAssTorrentsToolStripMenuItem->Checked = false;
				thePirateBayToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: "+bitsnoopToolStripMenuItem->Text;
				GLOBALS::search_source = "BIT";
				checkBox1->Checked = true;
				checkBox2->Text = "Video";
				checkBox3->Text = "Movies";
				checkBox4->Text = "TV";
				checkBox5->Text = "Apps";
				checkBox6->Text = "Games";
				checkBox7->Text = "Audio";
				checkBox8->Text = "Books";
				checkBox9->Text = "Other";
				checkBox10->Text = "XXX";
			} else {
				disableCatSelect();
				bitsnoopToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: none";
				GLOBALS::search_source = "N/A";
			}
		}

		private: System::Void thePirateBayToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!thePirateBayToolStripMenuItem->Checked) {
				enableCatSelect();
				thePirateBayToolStripMenuItem->Checked = true;
				kickAssTorrentsToolStripMenuItem->Checked = false;
				bitsnoopToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: "+thePirateBayToolStripMenuItem->Text;
				GLOBALS::search_source = "TPB";
				checkBox1->Checked = true;
				checkBox2->Text = "Video";
				checkBox3->Text = "Movies";
				checkBox4->Text = "TV";
				checkBox5->Text = "Apps";
				checkBox6->Text = "Games";
				checkBox7->Text = "Audio";
				checkBox8->Text = "Books";
				checkBox9->Text = "Other";
				checkBox10->Text = "XXX";
			} else {
				disableCatSelect();
				thePirateBayToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: none";
				GLOBALS::search_source = "N/A";
			}
		}

		private: System::Void kickAssTorrentsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!kickAssTorrentsToolStripMenuItem->Checked) {
				enableCatSelect();
				kickAssTorrentsToolStripMenuItem->Checked = true;
				bitsnoopToolStripMenuItem->Checked = false;
				thePirateBayToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: "+kickAssTorrentsToolStripMenuItem->Text;
				GLOBALS::search_source = "KAT";
				checkBox1->Checked = true;
				checkBox2->Text = "Movies";
				checkBox3->Text = "TV";
				checkBox4->Text = "Anime";
				checkBox5->Text = "Apps";
				checkBox6->Text = "Games";
				checkBox7->Text = "Music";
				checkBox8->Text = "Books";
				checkBox9->Text = "Other";
				checkBox10->Text = "XXX";
			} else {
				disableCatSelect();
				kickAssTorrentsToolStripMenuItem->Checked = false;
				sourceSelectButton->Text = "Source: none";
				GLOBALS::search_source = "N/A";
			}
		}

		private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}

		private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			SearchBtn->Text = "SEARCH";
			SettingsForm^ form = gcnew SettingsForm;
			form->ShowDialog();
		}

		private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			AboutForm^ form = gcnew AboutForm;
			form->ShowDialog();
		}

		private: System::Void magnetGrabberToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Browser->Document->OpenNew(true);
			Browser->Document->Write(resManager->GetString("MagGrabPage"));
			SetDocColors();
		}

		private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			HelpForm^ form = gcnew HelpForm;
			form->ShowDialog();
		}

		private: System::Void Browser_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
			SetDocColors();
			Browser->Document->Body->InnerHtml = resManager->GetString("WelcomeHtml");
		}

		private: System::Void CatBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CatPanel->Visible) {
				 CatPanel->Visible = false;
			 } else {
				 CatPanel->Visible = true;
			 }
		}

		private: System::Void SearchBtn_Enter(System::Object^  sender, System::EventArgs^  e) {
			 CatPanel->Visible = false;
		}

		private: System::Void SearchBox_Enter(System::Object^  sender, System::EventArgs^  e) {
			CatPanel->Visible = false;
		}

		private: System::Void StatusTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			if (KATWorker->CancellationPending || TPBWorker->CancellationPending || BITWorker->CancellationPending) {
				StatusLabel->Text = "Stopping ...";
			} else {
				ProgressBar->Value = (int)Math::Round((MagFilePos / double(MagFileSize)) * 100.0);
				StatusLabel->Text = "Searching: " + ResultCnt + " hits";
			}
		}

		private: System::Void KATWorker_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			bool catMatch = false;
			bool maxResults = false;
			size_t bytesRead = 0;
			uint32_t fragSize = 0;
			uint32_t fragIndex = 0;
			uint32_t fragStart = 0;
			uint32_t chunkIndex = 0;
			int32_t qFragCount = 0;
			int32_t fragHits = 0;
			char fragBuff[1024];
			std::string frags[12];
			std::ostringstream results;
			std::vector<std::string> queryFrags;
			std::vector<std::string> findFrags;
			std::vector<std::string> skipFrags;
			std::ostringstream* resultSSA;
			char* fileChunk = new char[CHUNK_SIZE];
			FILE* fp = NULL;

			try {

				std::string search_query = msclr::interop::marshal_as<std::string>((System::String^)e->Argument);
				EncodeQueryStr(search_query);
				queryFrags = tokenize(search_query, ' ');

				for (size_t f=0; f < queryFrags.size(); ++f) {
					DecodeQueryStr(queryFrags[f]);
					if (queryFrags[f][0] == '~') {
						queryFrags[f].erase(0, 1);
						skipFrags.push_back(queryFrags[f]);
					} else {
						if (queryFrags[f].size() > 2) {
							findFrags.push_back(queryFrags[f]);
							++qFragCount;
						}
					}
				}

				if (qFragCount > 0) {
					resultSSA = new std::ostringstream[qFragCount];
					fp = fopen(GLOBALS::kat_source.c_str(), "rb");
				} else {
					MessageBox::Show("Invalid search query!", "ERROR", MessageBoxButtons::OK);
					return;
				}

				if (resumeSearch) {
					chunkIndex = LastMCI;
					MagFilePos = LastMFP;
					_fseeki64(fp, MagFilePos, 0);
				}

				while (fp != NULL) {

					bytesRead = fread(fileChunk, 1, CHUNK_SIZE, fp);

					while (chunkIndex < bytesRead) {

						switch (fileChunk[chunkIndex]) {
						case '|': {

							if (fragIndex < 12) {
								frags[fragIndex++].assign(fragBuff, fragSize);
							}
							
							fragSize = 0;
							break;
						}
						case '\n': {

							fragStart = chunkIndex + 1;
							fragIndex = 0;
							fragSize = 0;
							fragHits = 0;
							catMatch = false;

							if (GLOBALS::cat_checked[0]) {
								catMatch = true;
							} else {
								for (int c=1; c < 10; ++c) {
									if (GLOBALS::cat_checked[c]) {
										switch (c) {
										case 1:
											if (frags[2] == "Movies") {
												catMatch = true;
											}
											break;
										case 2:
											if (frags[2] == "TV") {
												catMatch = true;
											}
											break;
										case 3:
											if (frags[2] == "Anime") {
												catMatch = true;
											}
											break;
										case 4:
											if (frags[2] == "Applications") {
												catMatch = true;
											}
											break;
										case 5:
											if (frags[2] == "Games") {
												catMatch = true;
											}
											break;
										case 6:
											if (frags[2] == "Music") {
												catMatch = true;
											}
											break;
										case 7:
											if (frags[2] == "Books") {
												catMatch = true;
											}
											break;
										case 8:
											if (frags[2] == "Other") {
												catMatch = true;
											}
											break;
										case 9:
											if (frags[2] == "XXX") {
												catMatch = true;
											}
											break;
										}
									}
									if (catMatch) { break; }
								}
							}

							if (!catMatch) { break; }

							for (uint32_t f=0; f < skipFrags.size(); ++f) {
								if (findString(frags[1], skipFrags[f], GLOBALS::csen_search)) {
									fragHits = -1;
									break;
								}
							}

							if (fragHits == -1) { break; }

							for (uint32_t f=0; f < findFrags.size(); ++f) {
								if (findString(frags[1], findFrags[f], GLOBALS::csen_search)) {
									tagSubstr(frags[1], findFrags[f], "<b>", "</b>", GLOBALS::csen_search);
									++fragHits;
								}
							}

							if (fragHits > 0) {

								if (ResultCnt < 1000) {

									++ResultCnt;
									double fileSize = std::stod(frags[5]) / 1024.0;
									std::string sizeType = "KB";

									if (fileSize > 1024.0) {
										fileSize /= 1024.0;
										sizeType = "MB";
										if (fileSize > 1024.0) {
											fileSize /= 1024.0;
											sizeType = "GB";
										}
									}

									char date[20];
									time_t t = std::stoll(frags[10]);
									struct tm *tm = localtime(&t);
									strftime(date, sizeof(date), "%Y-%m-%d", tm);

									resultSSA[qFragCount-fragHits] << "<p><a href='magnet:?xt=urn:btih:" <<
										frags[0] << "'>" << frags[1] << "</a><br />seeds: " << frags[8] <<
										" | peers: " << frags[9] << " | size: " << Math::Round(fileSize, 1) <<
										sizeType << " | type: " << frags[2] << " | files: " << frags[7] << 
										" | verified: " << ((frags[11]=="1")?"yes":"no") << " | date: " 
										<< date << " | <a href='https://itorrents.org/torrent/" << 
										frags[0] << ".torrent'>get .torrent</a></p><hr />";

								} else {
									maxResults = true;
								}

							}
							break;
						}
						default:
							if (fragSize < 1024) {
								fragBuff[fragSize++] = fileChunk[chunkIndex];
							}
							break;
						}

						++chunkIndex;
					}

					if (bytesRead != CHUNK_SIZE) { break; }
								
					if (GLOBALS::stop_search || maxResults) {
						LastMFP = MagFilePos;
						LastMCI = fragStart;
						autoStopped = maxResults;
						break;
					} else {
						chunkIndex = 0;
						MagFilePos += CHUNK_SIZE;
						_fseeki64(fp, MagFilePos, 0);
					}
				}

				for (int s=0; s < qFragCount; ++s) {
					results << resultSSA[s].str();
				}

			} catch (std::exception& error) {

				MessageBox::Show(%System::String(error.what()), "ERROR", MessageBoxButtons::OK);
				ResultCnt = 0;

			} finally {

				fclose(fp);
				delete[] resultSSA;
				delete[] fileChunk;

				if (ResultCnt > 0) {
					e->Result = %System::String(results.str().c_str());
				}
			}
		}

		private: System::Void TPBWorker_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			bool catMatch = false;
			bool maxResults = false;
			bool inQuote = false;
			size_t bytesRead = 0;
			uint32_t fragSize = 0;
			uint32_t fragIndex = 0;
			uint32_t fragStart = 0;
			uint32_t chunkIndex = 0;
			int32_t qFragCount = 0;
			int32_t fragHits = 0;
			char fragBuff[1024];
			std::string frags[10];
			std::ostringstream results;
			std::vector<std::string> queryFrags;
			std::vector<std::string> findFrags;
			std::vector<std::string> skipFrags;
			std::ostringstream* resultSSA;
			char* fileChunk = new char[CHUNK_SIZE];
			FILE* fp = NULL;

			try {

				std::string search_query = msclr::interop::marshal_as<std::string>((System::String^)e->Argument);
				EncodeQueryStr(search_query);
				queryFrags = tokenize(search_query, ' ');

				for (size_t f=0; f < queryFrags.size(); ++f) {
					DecodeQueryStr(queryFrags[f]);
					if (queryFrags[f][0] == '~') {
						queryFrags[f].erase(0, 1);
						skipFrags.push_back(queryFrags[f]);
					} else {
						if (queryFrags[f].size() > 2) {
							findFrags.push_back(queryFrags[f]);
							++qFragCount;
						}
					}
				}

				if (qFragCount > 0) {
					resultSSA = new std::ostringstream[qFragCount];
					fp = fopen(GLOBALS::tpb_source.c_str(), "rb");
				} else {
					MessageBox::Show("Invalid search query!", "ERROR", MessageBoxButtons::OK);
					return;
				}

				if (resumeSearch) {
					chunkIndex = LastMCI;
					MagFilePos = LastMFP;
					_fseeki64(fp, MagFilePos, 0);
				}

				while (fp != NULL) {

					bytesRead = fread(fileChunk, 1, CHUNK_SIZE, fp);

					while (chunkIndex < bytesRead) {

						switch (fileChunk[chunkIndex]) {
						case ',': {

							if (inQuote) {
								if (fragSize < 1024) {
									fragBuff[fragSize++] = fileChunk[chunkIndex];
								}
							} else {
								if (fragIndex < 10) {
									frags[fragIndex++].assign(fragBuff, fragSize);
								}
								fragSize = 0;
							}
							break;
						}
						case '\n': {

							fragStart = chunkIndex + 1;
							fragIndex = 0;
							fragSize = 0;
							fragHits = 0;
							catMatch = false;

							if (GLOBALS::cat_checked[0]) {
								catMatch = true;
							} else {
								for (int c=1; c < 10; ++c) {
									if (GLOBALS::cat_checked[c]) {
										switch (c) {
										case 1:
											if (frags[4] == "Video") {
												catMatch = true;
											}
											break;
										case 2:
											if (frags[4] == "Video" && (frags[5] == "Movies" || frags[5] == "HD - Movies")) {
												catMatch = true;
											}
											break;
										case 3:
											if (frags[4] == "Video" && (frags[5] == "TV Shows" || frags[5] == "HD - TV Shows")) {
												catMatch = true;
											}
											break;
										case 4:
											if (frags[4] == "Applications") {
												catMatch = true;
											}
											break;
										case 5:
											if (frags[4] == "Games") {
												catMatch = true;
											}
											break;
										case 6:
											if (frags[4] == "Audio") {
												catMatch = true;
											}
											break;
										case 7:
											if (frags[5] == "E-books") {
												catMatch = true;
											}
											break;
										case 8:
											if (frags[4] == "Other") {
												catMatch = true;
											}
											break;
										case 9:
											if (frags[4] == "Porn") {
												catMatch = true;
											}
											break;
										}
									}

									if (catMatch) { break; }
								}
							}

							if (!catMatch) { break; }

							for (uint32_t f=0; f < skipFrags.size(); ++f) {
								if (findString(frags[1], skipFrags[f], GLOBALS::csen_search)) {
									fragHits = -1;
									break;
								}
							}

							if (fragHits == -1) { break; }

							for (uint32_t f=0; f < findFrags.size(); ++f) {
								if (findString(frags[1], findFrags[f], GLOBALS::csen_search)) {
									tagSubstr(frags[1], findFrags[f], "<b>", "</b>", GLOBALS::csen_search);
									++fragHits;
								}
							}

							if (fragHits > 0) {

								if (ResultCnt < 1000) {

									if (frags[7] != "") {

										++ResultCnt;
										double fileSize = std::stod(frags[2]) / 1024.0;
										std::string sizeType = "KB";

										if (fileSize > 1024.0) {
											fileSize /= 1024.0;
											sizeType = "MB";
											if (fileSize > 1024.0) {
												fileSize /= 1024.0;
												sizeType = "GB";
											}
										}

										resultSSA[qFragCount-fragHits] << "<p><a href='magnet:?xt=urn:btih:" <<
											frags[7] << "'>" << frags[1] << "</a><br />size: " << Math::Round(fileSize, 1) <<
											sizeType << " | type: " << frags[4] << " (" << frags[5] << ") | files: " <<  
											frags[3] << " | uploader: " << frags[6] << " | date: " << frags[8] << 
											" | <a href='https://itorrents.org/torrent/" << 
											frags[7] << ".torrent'>get .torrent</a></p><hr />";

									}
								} else {
									maxResults = true;
								}
							}
							break;
						}
						case '"':
							 inQuote = !inQuote;
							 break;
						default:
							if (fragSize < 1024) {
								fragBuff[fragSize++] = fileChunk[chunkIndex];
							}
							break;
						}

						++chunkIndex;
					}

					if (bytesRead != CHUNK_SIZE) { break; }
								
					if (GLOBALS::stop_search || maxResults) {
						LastMFP = MagFilePos;
						LastMCI = fragStart;
						autoStopped = maxResults;
						break;
					} else {
						chunkIndex = 0;
						MagFilePos += CHUNK_SIZE;
						_fseeki64(fp, MagFilePos, 0);
					}
				}

				for (int s=0; s < qFragCount; ++s) {
					results << resultSSA[s].str();
				}

			} catch (std::exception& error) {

				MessageBox::Show(%System::String(error.what()), "ERROR", MessageBoxButtons::OK);
				ResultCnt = 0;

			} finally {

				fclose(fp);
				delete[] resultSSA;
				delete[] fileChunk;

				if (ResultCnt > 0) {
					e->Result = %System::String(results.str().c_str());
				}
			}
		}

		private: System::Void BITWorker_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			bool catMatch = false;
			bool maxResults = false;
			size_t bytesRead = 0;
			uint32_t fragSize = 0;
			uint32_t fragIndex = 0;
			uint32_t fragStart = 0;
			uint32_t chunkIndex = 0;
			int32_t qFragCount = 0;
			int32_t fragHits = 0;
			char fragBuff[1024];
			std::string frags[5];
			std::ostringstream results;
			std::vector<std::string> queryFrags;
			std::vector<std::string> findFrags;
			std::vector<std::string> skipFrags;
			std::ostringstream* resultSSA;
			char* fileChunk = new char[CHUNK_SIZE];
			FILE* fp = NULL;

			try {

				std::string search_query = msclr::interop::marshal_as<std::string>((System::String^)e->Argument);
				EncodeQueryStr(search_query);
				queryFrags = tokenize(search_query, ' ');

				for (size_t f=0; f < queryFrags.size(); ++f) {
					DecodeQueryStr(queryFrags[f]);
					if (queryFrags[f][0] == '~') {
						queryFrags[f].erase(0, 1);
						skipFrags.push_back(queryFrags[f]);
					} else {
						if (queryFrags[f].size() > 2) {
							findFrags.push_back(queryFrags[f]);
							++qFragCount;
						}
					}
				}

				if (qFragCount > 0) {
					resultSSA = new std::ostringstream[qFragCount];
					fp = fopen(GLOBALS::bit_source.c_str(), "rb");
				} else {
					MessageBox::Show("Invalid search query!", "ERROR", MessageBoxButtons::OK);
					return;
				}

				if (resumeSearch) {
					chunkIndex = LastMCI;
					MagFilePos = LastMFP;
					_fseeki64(fp, MagFilePos, 0);
				}

				while (fp != NULL) {

					bytesRead = fread(fileChunk, 1, CHUNK_SIZE, fp);

					while (chunkIndex < bytesRead) {

						switch (fileChunk[chunkIndex]) {
						case '|': {

							if (fragIndex < 5) {
								frags[fragIndex++].assign(fragBuff, fragSize);
							}

							fragSize = 0;
							break;
						}
						case '\n': {

							fragStart = chunkIndex + 1;
							fragIndex = 0;
							fragSize = 0;
							fragHits = 0;
							catMatch = false;

							if (GLOBALS::cat_checked[0]) {
								catMatch = true;
							} else {
								for (int c=1; c < 10; ++c) {
									if (GLOBALS::cat_checked[c]) {
										switch (c) {
										case 1: {
											std::string catFrag = copyStrStart(frags[2], ' ');
											if (catFrag == "Video") {
												catMatch = true;
											}
											break;
										}
										case 2:
											if (frags[2] == "Video Movies") {
												catMatch = true;
											}
											break;
										case 3:
											if (frags[2] == "Video TV" || frags[2] == "Video Anime") {
												catMatch = true;
											}
											break;
										case 4: {
											std::string catFrag = copyStrStart(frags[2], ' ');
											if (catFrag == "Software") {
												catMatch = true;
											}
											break;
										}
										case 5: {
											std::string catFrag = copyStrStart(frags[2], ' ');
											if (catFrag == "Games") {
												catMatch = true;
											}
											break;
										}
										case 6: {
											std::string catFrag = copyStrStart(frags[2], ' ');
											if (catFrag == "Audio") {
												catMatch = true;
											}
											break;
										}
										case 7:
											if (frags[2] == "Other Ebooks") {
												catMatch = true;
											}
											break;
										case 8: {
											std::string catFrag = copyStrStart(frags[2], ' ');
											if (catFrag == "Other") {
												catMatch = true;
											}
											break;
										}
										case 9:
											if (frags[2] == "Video XXX" || frags[2] == "Other XXX") {
												catMatch = true;
											}
											break;
										}
									}

									if (catMatch) { break; }
								}
							}

							if (!catMatch) { break; }

							for (uint32_t f=0; f < skipFrags.size(); ++f) {
								if (findString(frags[1], skipFrags[f], GLOBALS::csen_search)) {
									fragHits = -1;
									break;
								}
							}

							if (fragHits == -1) { break; }

							for (uint32_t f=0; f < findFrags.size(); ++f) {
								if (findString(frags[1], findFrags[f], GLOBALS::csen_search)) {
									tagSubstr(frags[1], findFrags[f], "<b>", "</b>", GLOBALS::csen_search);
									++fragHits;
								}
							}

							if (fragHits > 0) {

								if (ResultCnt < 1000) {

									++ResultCnt;
									replaceSubstr(frags[2], " ", " - ");

									resultSSA[qFragCount-fragHits] << "<p><a href='magnet:?xt=urn:btih:" <<
										frags[0] << "'>" << frags[1] << "</a><br />type: " << frags[2] << 
										" | <a href='" << frags[3] << "' target='_blank'>more info</a> | " <<
										"<a href='https://itorrents.org/torrent/" << 
										frags[0] << ".torrent'>get .torrent</a></p><hr />";

								} else {
									maxResults = true;
								}
							}
							break;
						}
						default:
							if (fragSize < 1024) {
								fragBuff[fragSize++] = fileChunk[chunkIndex];
							}
							break;
						}

						++chunkIndex;
					}

					if (bytesRead != CHUNK_SIZE) { break; }
								
					if (GLOBALS::stop_search || maxResults) {
						LastMFP = MagFilePos;
						LastMCI = fragStart;
						autoStopped = maxResults;
						break;
					} else {
						chunkIndex = 0;
						MagFilePos += CHUNK_SIZE;
						_fseeki64(fp, MagFilePos, 0);
					}
					
				}

				for (int s=0; s < qFragCount; ++s) {
					results << resultSSA[s].str();
				}

			} catch (std::exception& error) {

				MessageBox::Show(%System::String(error.what()), "ERROR", MessageBoxButtons::OK);
				ResultCnt = 0;

			} finally {

				fclose(fp);
				delete[] resultSSA;
				delete[] fileChunk;

				if (ResultCnt > 0) {
					e->Result = %System::String(results.str().c_str());
				}
			}
		}

		private: System::Void KATWorker_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			
			StatusTimer->Stop();

			if (GLOBALS::stop_search) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "RESUME";
			} else if (autoStopped) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "MORE";
			} else {
				ProgressBar->Value = 0;
				StatusLabel->Text = "Finished: " + ResultCnt + " results";
				SearchBtn->Text = "SEARCH";
			}

			if (ResultCnt == 0) {
				Browser->Document->Body->InnerHtml = resManager->GetString("NoResultsHtml");
			} else {
				Browser->Document->Body->InnerHtml = (System::String^)(e->Result);
			}
		}

		private: System::Void TPBWorker_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
			
			StatusTimer->Stop();

			if (GLOBALS::stop_search) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "RESUME";
			} else if (autoStopped) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "MORE";
			} else {
				ProgressBar->Value = 0;
				StatusLabel->Text = "Finished: " + ResultCnt + " results";
				SearchBtn->Text = "SEARCH";
			}

			if (ResultCnt == 0) {
				Browser->Document->Body->InnerHtml = resManager->GetString("NoResultsHtml");
			} else {
				Browser->Document->Body->InnerHtml = (System::String^)(e->Result);
			}
		}

		private: System::Void BITWorker_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {

			StatusTimer->Stop();

			if (GLOBALS::stop_search) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "RESUME";
			} else if (autoStopped) {
				StatusLabel->Text = "Stopped: " + ResultCnt + " results";
				SearchBtn->Text = "MORE";
			} else {
				ProgressBar->Value = 0;
				StatusLabel->Text = "Finished: " + ResultCnt + " results";
				SearchBtn->Text = "SEARCH";
			}

			if (ResultCnt == 0) {
				Browser->Document->Body->InnerHtml = resManager->GetString("NoResultsHtml");
			} else {
				Browser->Document->Body->InnerHtml = (System::String^)(e->Result);
			}
		}

		private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled) {
				checkBox1->Enabled = false;
				checkBox2->Checked = checkBox1->Checked;
				checkBox3->Checked = checkBox1->Checked;
				checkBox4->Checked = checkBox1->Checked;
				checkBox5->Checked = checkBox1->Checked;
				checkBox6->Checked = checkBox1->Checked;
				checkBox7->Checked = checkBox1->Checked;
				checkBox8->Checked = checkBox1->Checked;
				checkBox9->Checked = checkBox1->Checked;
				checkBox10->Checked = checkBox1->Checked;
				checkBox1->Enabled = true;
			}
		}

		private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox2->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		}

		private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox3->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox4->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox5->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox6->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox7->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox8->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox9->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		 }

		private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBox1->Enabled && !checkBox10->Checked) {
				checkBox1->Enabled = false;
				checkBox1->Checked = false;
				checkBox1->Enabled = true;
			}
			SearchBtn->Text = "SEARCH";
		}

		private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			GLOBALS::csen_search = checkBox11->Checked;
			SearchBtn->Text = "SEARCH";
		}

		private: System::Void sourceSelectButton_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			SearchBtn->Text = "SEARCH";
		}

		private: System::Void SearchBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			SearchBtn->Text = "SEARCH";
		}
};
}
