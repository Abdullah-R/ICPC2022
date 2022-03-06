#include <string>
#include <iostream>
#include <math.h>

int main(){

    double p;

    std::cin >> p;

    if(p==1) {
        std::cout<<1;
        return 1;
    }

    double n = sqrt((log(1-p)-1)/log(1-p));
    double Pu = pow(1-p, ceil(n));
    double up = (Pu + (ceil(n) * (1-Pu)))/ceil(n);
    double Pd = pow(1-p, floor(n));
    double down = (Pd + (floor(n) * (1-Pd)))/floor(n);

    if(up < down) std::cout<<ceil(n);
    else std::cout<<floor(n);    
}