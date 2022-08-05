#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        vector<int> histogram = {};
        vector<int> indices = {};
        string result = ""; 

        for(int i = 0; i < 128; i++){
            histogram.push_back(0);
            indices.push_back(i);
        }

        for(char c : s)
            histogram[c]++;

        sort(indices.begin(), indices.end(), [&histogram](int i, int j){return histogram[i] > histogram[j];});

        for(int i = 0; i < histogram.size(); i++){
            if(histogram[indices[i]] != 0)
                for(int j = 0; j < histogram[indices[i]]; j++)
                    result += char(indices[i]);
        }
    return result;
    }
    
};
