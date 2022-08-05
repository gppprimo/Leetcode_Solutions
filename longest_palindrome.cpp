class Solution {
public:
    int longestPalindrome(string s) {
        int count[256]{};
        int sum = 0;
        bool center = false;

        for(char c : s){
            count[c]++;
        }

        for(int v : count){
            sum += v / 2 * 2;
            if(v % 2 == 1)
                center = true;
        }
        return sum + center;
    }
};
