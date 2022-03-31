#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void day2() {
    ifstream fin("day-2.txt");
    int amount, depth = 0, position = 0, aim = 0;
    string command;
    while (fin >> command >> amount){
        if(command=="forward"){
            position += amount;
            depth = depth + (aim * amount);
        }else if(command=="up"){
            aim -= amount;
        }else if(command=="down") {
            aim += amount;
        }
    }
    cout << "position * depth: " << (position * depth) << endl; //desired result
} 