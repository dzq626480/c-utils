#include <string>

using namespace string;

inline void Comm::StrReplaceAll(string& haystack, string needle, string s) {
  string::size_type pos = 0;
  while ((pos = haystack.find(needle, pos)) != string::npos) {
    haystack.erase(pos, needle.length());
    haystack.insert(pos, s);
    pos += s.length();
  }
}