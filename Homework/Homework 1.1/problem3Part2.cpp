/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 14 
Description: | A / (m + n) | (where | x | denotes the absolute value of x)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the command window
    cout << "Enter the m, n, and A values:\n";
    
    //Creation of the m value
    double m;
    //Entering of the variable value
    cin >> m;
    
    //Creation of the m value
    double n;
    //Entering of the variable value
    cin >> n;
    
    //Creation of the m value
    double A; 
    //Entering of the variable value
    cin >> A;
    
    //The required mathematical "action" for the problem
    double action = abs(A/(m+n));
    
    //The output of the mathematical "action"
    cout << "The operation's solution is: " << action; 
}
