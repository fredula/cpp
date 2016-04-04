//
//  main_2.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// same as main_1 but with added error checking

#include <iostream>
#include <fstream>
using namespace std;

int main_2(){
    
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("infile_2.dat");
    if(in_stream.fail()){
        cout << "Input file opening failed. \n";
        exit(1);
    }
    
    out_stream.open("outfile_2.dat");
    if(out_stream.fail()){
        cout << "Output file opening failed. \n";
        exit(1);
    }
    
    int first, second, third;
    in_stream >> first >> second >> third;
    out_stream  << "The sum of the first \n"
                << "numbers in infile.dat\n"
                << "is " << (first+second+third)
    << endl;
    in_stream.close();
    out_stream.close();
    
    return 0;
}
