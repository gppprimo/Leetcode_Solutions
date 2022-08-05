class Solution {
public:
    bool isPalindrome(int x) {
        string s = std::to_string(x);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s[s.size() - 1 - i])
                return false;
        }
        return true;
    }
};