//
// Created by William Aey on 1/23/2022.
//

#pragma once
#define ADVENT_OF_CODE_2021_DAY_1_H
#include "fstream"
/*
 * function gets all numbers greater than the original at the start of the list
 * */
void getGreater(){
    std::ifstream indata; // indata is like cin
    int num; // variable for input value
    indata.open("day-1.txt"); // opens the file
    if(!indata) { // file couldn't be opened
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
    }

    indata >> num;
    
    while ( !indata.eof() ) { // keep reading until end-of-file
        std::cout << "The next number is " << num << std::endl;
        indata >> num; // sets EOF flag if no value found
    }
    indata.close();
    std::cout << "End-of-file reached.." << std::endl;
}


