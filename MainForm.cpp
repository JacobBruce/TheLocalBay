#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

std::string GLOBALS::ini_file = "./config.ini";
std::string GLOBALS::search_source;
std::string GLOBALS::kat_source;
std::string GLOBALS::tpb_source;
std::string GLOBALS::bit_source;
bool GLOBALS::csen_search = false;
bool GLOBALS::stop_search = false;
bool GLOBALS::cat_checked[10];

[STAThread]
void Main(array<String^>^ args)
{
	CSimpleIniA ini;
	ini.SetUnicode();
	ini.LoadFile(GLOBALS::ini_file.c_str());

	GLOBALS::search_source = ini.GetValue("Search", "search_source", "KAT");
	GLOBALS::kat_source = ini.GetValue("Search", "kat_source", "");
	GLOBALS::tpb_source = ini.GetValue("Search", "tpb_source", "");
	GLOBALS::bit_source = ini.GetValue("Search", "bit_source", "");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TheLocalBay::MainForm form;
	Application::Run(%form);
}