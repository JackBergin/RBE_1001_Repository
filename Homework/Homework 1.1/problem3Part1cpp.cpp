/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 13 
Description: The square root of the average of m and n
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the command window
    cout << "Enter the m and the n values:\n";
    
    //Creation of the m value
    double m;
    //Entering of the variable value
    cin >> m;
    
    //Creation of the m value
    double n;
    //Entering of the variable value
    cin >> n;
    
    //The required mathematical "action" for the problem
    double action = sqrt((m+n)/2);
    
    //The output of the mathematical "action"
    cout << "The square root of the average for m and n is: " << action; 
}
