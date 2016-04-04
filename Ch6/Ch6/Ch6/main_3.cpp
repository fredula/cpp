//
//  main_3.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  open a file stream. append to the file stream instead of overwriting the file.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main_3(){
    
    ofstream fout;
    
    cout << "Opening file\n";
    fout.open("rhyme.txt", ios::app);
    if(fout.fail()){
        cout << "There was an error opening the file\n";
        exit(1);
    }
    
    fout    << "5 6 pick up sticks. \n"
            << "7 8 ain't it great! \n";
    
    fout.close();
    cout << "End of file appending\n";
    
    return 0;
}
