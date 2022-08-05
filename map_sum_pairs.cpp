#include <iostream>
#include <string>
#include <map>
using namespace std;

class MapSum {
public:
    /** Initialize your data structure here. */
    map<string, int> mappina;
    MapSum() {

    }

    void insert(string key, int val) {
        map<string, int>::iterator it = mappina.find(key);
        if(it == mappina.end())
            mappina.insert(pair<string, int>(key, val));
        else
            it->second = val;
    }

    int sum(string prefix) {
        int sum = 0;
        for(auto &key : mappina){
            if(key.first.substr(0, prefix.size()).find(prefix) != string::npos)
                sum += key.second;
        }
        return sum;
    }
};
