#include <string>
#include <iostream>
#include <unordered_set>


int main(){

    std::string line;
    std::string g;
    std::unordered_set<char> goal;                             

    std::getline(std::cin, g);

    std::string::iterator it;
    // Traverse the string
    for (it = g.begin(); it != g.end(); it++) {
        goal.insert(*it);
    }

    int i;
    bool flag = false;

    for(i = 0; i < 7; i++)
    {
        std::getline(std::cin, line);
        std::string buf = "";
        int arr [5] = {0,0,0,0,0};
        int done = 0;
        for (int i = 0; i < 5; i++) {
            char curr = line.at(i);
            if (curr == g.at(i)) {
                arr[i] = 2;
                done++;
                buf.append("G");
            }
            else if (goal.count(curr) == 1){
                arr[i] = 1;
                buf.append("Y");
            }
            else buf.append("X");
        }
        if (done == 5) {
            std::cout<<"WINNER";
            break;
        } else if(i==6){
            std::cout<<"LOSER";
            break;
        }
        std::cout<<buf<<'\n';
    }
}