//
//  main_4.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main_4(){
    char in_file_name[16], out_file_name[16];
    ifstream in_stream;
    ofstream out_stream;
    
    cout    << "I will sum three numbers taken form the input\n"
            << "file and write the sum to the output file.\n";
    cout    << "Enter the input file name. (Max 15 characters): \n";
    cin     >> in_file_name;
    cout    << "Enter the output file name. (Max 15 characters): \n";
    cin     >> out_file_name;
    cout    << "I will read the numbers from the file "
            << in_file_name << " and\n"
            << "place the sum in the file "
    << out_file_name << endl;
    
    in_stream.open(in_file_name);
    if(in_stream.fail()){
        cout << "Erorr opening file\n";
        exit(1);
    }
    
    out_stream.open(out_file_name);
    if(out_stream.fail()){
        cout << "Erorr opening file\n";
        exit(1);
    }
    
    int first, second, third;
    in_stream       >> first >> second >> third;
    out_stream      << "The sum of the first three numbers\n"
                    << "in " << in_file_name << endl
                    << "is " << (first + second + third)
    << endl;
    
    in_stream.close();
    out_stream.close();
    
    return 0;
}
