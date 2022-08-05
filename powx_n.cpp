#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

class Solution {
public:
    static double calc(double x, int n){
        double res = x;
        for(int i = 1; i < std::abs(n); i++)
            res *= x;
        return res;
    }

        double myPow(double x, int n) {
        if(x == 1 || n == 0)
            return 1;
        if(x == -1 and n % 2 == 0)
            return 1;
        if(x == -1 and n % 2 == 1)
            return -1;
        if(n <= -2147483648 || n >= 2147483647)
            return 0;
        if(n < 0)
            return 1/Solution::calc(x, abs(n));
        return Solution::calc(x, n);
    }
};

