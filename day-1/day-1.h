//
// Created by William Aey on 1/23/2022.
//

#pragma once
#include "fstream"
#include "vector"
/*
 * function gets all numbers greater than the original at the start of the list
 * */
void day1(){
    std::ifstream indata; // indata is like cin
    int num; // variable for input value
    indata.open("day-1.txt"); // opens the file
    if(!indata) { // file couldn't be opened
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
    }

    indata >> num;
    std::vector<int> fileNumbers;
    while ( !indata.eof() ) { // keep reading until end-of-file
//        std::cout << "The next number is " << num << std::endl;
//        indata >> num; // sets EOF flag if no value found
        fileNumbers.push_back(num);
        indata>>num;
    }
    std::cout<<"max size: "<<fileNumbers.size()<<std::endl;
    int increased{0};
    for(size_t i{0};i<fileNumbers.size()-3;i++)
    {
        std::cout<<i<<std::endl;
        int firstIncrment = fileNumbers[i] + fileNumbers[i+1] + fileNumbers[i+2];
                int secondIncrment = fileNumbers[i+1] + fileNumbers[i+2] + fileNumbers[i+3];
                if(firstIncrment < secondIncrment)
                {
                    increased++;
                }

    }
    std::cout<<increased<<std::endl;
    indata.close();
    std::cout << "End-of-file reached.." << std::endl;
}


