class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[] = {".-", "-...", "-.-.", "-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> resultsSet;
        string result = "";
        map<char, string> map;
        int startChar = 97;
        for(string s : codes){
            map.insert(std::pair<char, string>((char) startChar++, s));
        }

        for(string s : words){
            for(char c : s)
                result += map.at(c);
            resultsSet.insert(result);
            result = "";
        }

        return resultsSet.size();
    }
};
