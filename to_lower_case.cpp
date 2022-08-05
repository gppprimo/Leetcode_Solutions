#include <string>
using namespace std;
class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        if(str == "")
            return str;

        for(int i = 0 ; i < str.size(); i++){
            if (int(str[i]) >= 65 and int(str[i]) < 97)
                s += str[i] + 32;
            else
                s += str[i];
        }
        return s;
    }
};
