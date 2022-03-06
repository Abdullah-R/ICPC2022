#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

int main(){

    int vals [5] = {6,3,2,1,2};
    bool flag = true;

//    std::ifstream infile("thefile.txt");
    std::string line;

    while (std::getline(std::cin, line))
    {
        std::istringstream iss(line);
        int n;
        std::vector<int> v;

        while (iss >> n)
        {
            v.push_back(n);
        }
        int score = 0;
        for(int i=0; i < v.size(); i++){
        score += v[i]*vals[i];
        }
        std::cout<<score;
        if(flag) {
            std::cout<<" ";
            flag = !flag;
        }
    }
}