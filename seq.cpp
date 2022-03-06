#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <cstdint>
#include <math.h>

int64_t ipow(int64_t base, int exp)
{
    int64_t result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}

int64_t gcd(int64_t a, int64_t b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main(){

    std::vector<int> v;

    char c;
    while (std::cin >> c)
    {
        v.push_back(((int)c - (int)('0')));
    }
    int64_t interm = 0;
    for(int i=0; i < v.size(); i++){
        interm += v[i]*((int64_t)1 << (i))*(ipow(3, v.size()-1-i));
    }


    int64_t a = (interm%((int64_t)1 << (v.size()-1)));
    int64_t b = ((int64_t)1 << (v.size()-1));
    int64_t gcf = gcd(a,b);

    std::cout<<(interm/((int64_t)1 << (v.size()-1)));
    if(a) std::cout<<' '<< a/gcf << '/' << b/gcf;
}