class Solution {
public:
    string convertToBase7(int num) {
        int temp = abs(num);
        string res = "";

        while(temp % 7 != temp){
            res.insert(0, to_string((temp % 7)));
            temp = temp / 7;
        }
        res.insert(0, to_string((temp % 7)));

        if(num < 0)
            res.insert(res.begin(), 1, '-');

        return res;
    }
};
