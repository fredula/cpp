//
//  main_7.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/29.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// Computes the average yield of a pea growing patch

#include <iostream>
using namespace std;

//function declaration
//returns an estimate of the number of peas harvested
//params    - @min_peas minimum peas in the pod
//          - @max_peas maximum peas in pod
//          - @pod_count the number of pods
double est_total(int min_peas, int max_peas, int pod_count);

int main_7(){
    
    int max_count, min_count, pod_count;
    //average pea is local to main function
    double average_pea, yield;
    
    cout << "Enter minimum and maximum number of peas in a pod : ";
    cin >> min_count >> max_count;
    cout << "Enter the number of pods : ";
    cin >> pod_count;
    cout << "Enter the weight of an average pea (in ounces)";
    cin >> average_pea;
    
    yield = est_total(min_count, max_count, pod_count) * average_pea;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout    << "Min number of peas per pod = " << min_count << endl
            << "Max number of peas per pod = " << max_count << endl
            << "Pod count = " << pod_count << endl
            << "Average pea weight = "
            << average_pea << " ounces " << endl
            << "Estimated average yield = " << yield << " ounces "
            << endl;
    
    return 0;
}

double est_total(int min_peas, int max_peas, int pod_count){
    //average pea is local to est_total function
    double average_pea;
    
    average_pea = (max_peas + min_peas)/2.0;
    return (pod_count * average_pea);
}