/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Problem 7
Description: Find the sum 1 + 2 ... + n for a given positive integer n.
*/

#include <iostream>
using namespace std;

int main()
{
    //Output on the input window
    cout<<"Enter a number n: \n";
    
    //Variable used to sum the n sequence in the for loop
    int sum;
   
    //The variable for n being declared
    int n;
    //The input to give n a value
    cin >> n;
    
    //For loop that will sum up numbers 1 to n
    for(int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    
    //Prints out on the input window the sum.
    cout << "Your sum is: " << sum;
}
