//
//  main_7.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/03.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// demonstrates the functions new_line and get_input

#include <iostream>
using namespace std;

//discards input remaining on the current line
//removes the '\n' at the end of the line
//Only works for keyboard input
void new_line();

//the variable number has been given a value the user approves of
void get_int(int& number);


int main_7(){
    int n;
    
    get_int(n);
    cout    << "Final value read in = " << n << endl
            << "End of demonstration.\n";
    return 0;
}

void new_line(){
    char symbol;
    do{
        cin.get(symbol);
    }while(symbol != '\n');
}

void get_int(int& number){
    char ans;
    do{
        cout    << "Enter input number: ";
        cin     >> number;
        cout    << "You entered " << number
                << " Is that correct? (yes/no): ";
        cin     >> ans;
        new_line();
    }while ((ans != 'Y') && (ans != 'y'));
}

