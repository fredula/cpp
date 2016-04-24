//
//  main_8.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//  A program to replace text with another string
//  This program opens the file, and replaces text in the file with another string

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//Pre condition: in_stream and out_stream have been donnected to input file with open
//Post condition: contents of in_stream are copied to out_stream but C replace with C++
void add_plus_plus(ifstream& in_stream, ofstream& out_stream);

int main_8(){
    ifstream fin;
    ofstream fout;
    
    cout << "Begin editing files. \n";
    
    fin.open("cad.dat");
    if(fin.fail()){
        cout << "Input file opening failed.\n";
        exit(1);
    }
    
    fout.open("cplusad.dat");
    if(fout.fail()){
        cout << "Output file opening failed.\n";
        exit(1);
    }
    
    add_plus_plus(fin, fout);
    fin.close();
    fout.close();
    
    cout << "End of editing files.\n";
    
    return 0;
}

void add_plus_plus(ifstream& in_stream, ofstream& out_stream){
    char next;
    in_stream.get(next);
    while (!in_stream.eof()) {
        if(next == 'C')
            out_stream << "C++";
        else
            out_stream << next;
        
        in_stream.get(next);
    }
}

