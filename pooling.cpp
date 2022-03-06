#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <cstdint>
#include <math.h>

int main(){

    std::vector<int> v;

    double p;

    std::cin >> p;

    double min = std::numeric_limits<double>::max();
    int val;

    int i;

    for (i = 2; i <= 16; i++){
        double P = pow(1-p, i);
        double e = (P + (i * (1-P)))/i;
        if(e < min) {
            val = i;
            min = e; 
        }
    }

    std::cout<<val;
}