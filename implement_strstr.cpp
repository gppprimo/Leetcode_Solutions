class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        else{
            int haystackDim = haystack.size();
            int needleDim = needle.size();
            for(int i = 0; i < haystackDim - needleDim + 1; i++) {
                for (int j = 0; j < needleDim; j++) {
                    if (haystack[i + j] != needle[j])
                        break;
                    else if(needleDim - 1 == j)
                        return i;
                }

            }
        }
        return -1;
    }
};
