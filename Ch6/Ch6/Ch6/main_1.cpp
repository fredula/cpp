
//
//  main.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// A simple input/output file
// The file path needs to be saved in the default derived data Debug folder of XCODE, otherwise it wont work
// https://www.youtube.com/watch?v=De6trY8FRYY

#include <iostream>
#include <fstream>
using namespace std;

int main_1() {
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("infile.dat");
    out_stream.open("outfile.dat");
    
    int first, second, third;
    in_stream >> first >> second >> third;
    cout << first << second << third << endl;
    out_stream  << "The sum of the first 3\n"
                << "numbers in infile.dat\n"
                << "is " << (first+second+third)
    << endl;
    
    in_stream.close();
    out_stream.close();
    
    return 0;
}
