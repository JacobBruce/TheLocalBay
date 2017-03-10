#pragma once
#include <string>

#define CHUNK_SIZE 10000000

namespace GLOBALS {
	extern std::string ini_file;
	extern std::string search_source;
	extern std::string kat_source;
	extern std::string tpb_source;
	extern std::string bit_source;
	extern bool stop_search;
	extern bool csen_search;
	extern bool cat_checked[];
}