#include <string>

using namespace std;

inline string Comm::StrFormat(const char* pcFmt, ...) {
  if (pcFmt == NULL) {
    return "";
  }
  string s;
  va_list va;

  va_start(va, pcFmt);
  size_t nLen = vsnprintf(NULL, 0, pcFmt, va);
  if (nLen > 0) {
    va_list va2;
    va_start(va2, pcFmt);

    s.resize(nLen);
    char* sTmp = (char*)s.c_str();
    vsnprintf(sTmp, nLen + 1, pcFmt, va2);

    va_end(va2);
  }
  va_end(va);

  return s;
}