// File: functionsreturn.cpp
// Created by Hugo Valle on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
/* Task: Define a function that takes one
 * input parameter (integer), it increments the value
 * by one, and it returns the new value to user
 */
#include <iostream>
using namespace std;
// Constants

// Prototypes
int IncrementInt(int i); // an integer
void ReallyIncrementInt(int &i); // an address of an int
// Main Program Program
int main()
{
    int num = 0;
    int num2 = 0;
    cout<<"num is "<<num<<endl;
    num2 = IncrementInt(num);
    cout<<"num2 is "<<num2<<endl;
    cout<<"num is "<<num<<endl;
    num = IncrementInt(num);
    cout<<"num is "<<num<<endl;

    cout<<"Address of num: "<<&num<<endl;
    ReallyIncrementInt(num);
    cout<<"num is "<<num<<endl;

    return 0;
}
// Function Definitions
// Passing parameters by value
int IncrementInt(int i)
{
    cout<<"Address of i inside IncrementInt: "<<
         &i << endl;
    i += 1;
    return i;
}
// Increment original integer
// by 1. Passing parameter by
// reference (pass address)
void ReallyIncrementInt(int &i)
{
    cout<<"Address of i inside ReallyIncrementInt: "<<
         &i << endl;
    i++;
}
