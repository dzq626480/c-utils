#include <string>

using namespace std;

/**
* @brief 中文提取
* @param sSrcStr 原字符串
* @param resp 返回的中文字符串
*/
inline void GetCnStr(const string sSrcStr, string& resp) {
    for (unsigned int i = 0; i < sSrcStr.size(); i++) {
        if (sSrcStr[i] & 0x80) {
            resp += sSrcStr[i];
            resp += sSrcStr[++i];
        }
    }
}
