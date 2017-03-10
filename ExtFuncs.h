#pragma once
#include <sys/stat.h>
#include <algorithm>
#include <vector>
#include <cctype>
#include <sstream>
#include <string>

#ifdef _WIN32
   #include <io.h> 
   #define access    _access_s
#else
   #include <unistd.h>
#endif

bool FileExists(const std::string &Filename)
{
    return access(Filename.c_str(), 0) == 0;
}

long long FileSize(std::string &filename)
{
	#ifdef WIN32
		struct _stat64 stat_buf;
		int rc = _stat64(filename.c_str(), &stat_buf);
	#else
		struct stat64 stat_buf;
		int rc = stat64(filename.c_str(), &stat_buf);
	#endif

    return rc == 0 ? stat_buf.st_size : -1;
}

void EncodeQueryStr(std::string& query)
{
	bool inQuote = false;
	for (size_t i=0; i < query.size();) {
		if (query[i] == '"') {
			inQuote = !inQuote;
			query.erase(i, 1);
		} else {
			if (inQuote) {
				if (query[i] == ' ') {
					query[i] = '\0';
				}
			}
			++i;
		}
	}
}

void DecodeQueryStr(std::string& query)
{
	for (size_t i=0; i < query.size(); ++i) {
		if (query[i] == '\0') {
			query[i] = ' ';
		}
	}
}

void uppercaseStr(std::string &s)
{
	for (size_t i=0; i < s.size(); ++i) {
		s[i] = std::toupper(s[i]);
	}
}

void tagSubstr(std::string &s, std::string search, std::string start, std::string end, bool caseSen=false)
{
	size_t sstep = search.size() + start.size(); 
	std::string haystack;
	haystack.assign(s);

	if (!caseSen) {
		uppercaseStr(haystack);
		uppercaseStr(search);
	}

    for (size_t pos = 0; ; pos += search.length()) {
        pos = haystack.find(search, pos);
        if (pos == std::string::npos) break;
		pos += s.size() - haystack.size();
		s.insert(pos, start);
		s.insert(pos+sstep, end);
	}
}

void replaceSubstr(std::string &s, std::string search, std::string replace)
{
    for (size_t pos = 0; ; pos += replace.length()) {
        pos = s.find(search, pos);
		if (pos == std::string::npos) { break; };
        s.erase(pos, search.length());
        s.insert(pos, replace);
    }
}

std::vector<std::string> tokenize(const std::string &text, char sep)
{
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;
    while ((end = text.find(sep, start)) != std::string::npos) {
        if (end != start) {
          tokens.push_back(text.substr(start, end - start));
        }
        start = end + 1;
    }
    if (end != start) {
       tokens.push_back(text.substr(start));
    }
    return tokens;
}

bool findString(const std::string & strHaystack, const std::string & strNeedle, bool caseSen=false)
{
	if (caseSen) {
		if (strHaystack.find(strNeedle) == std::string::npos)  {
			return false;
		} else {
			return true;
		}
	} else {
		auto it = std::search(
			strHaystack.begin(), strHaystack.end(),
			strNeedle.begin(),   strNeedle.end(),
			[](char ch1, char ch2) { return std::toupper(ch1) == std::toupper(ch2); }
		);
		return (it != strHaystack.end() );
	}
}

std::string copyStrStart(std::string& source, const char stopChar) {
	int strLen = 1;
	for (size_t s=0; s++ < source.size(); ++strLen) {
		if (source[s] == stopChar) { break; }
	}
	return std::string(source, 0, strLen);
}

void html_encode(std::string& data)
{
    std::string buffer;
    buffer.reserve(data.size());
    for (size_t pos = 0; pos != data.size(); ++pos) {
        switch (data[pos]) {
            case '&':  buffer.append("&amp;");       break;
            case '\"': buffer.append("&quot;");      break;
            case '\'': buffer.append("&apos;");      break;
            case '<':  buffer.append("&lt;");        break;
            case '>':  buffer.append("&gt;");        break;
            default:   buffer.append(&data[pos], 1); break;
        }
    }
    data.swap(buffer);
}