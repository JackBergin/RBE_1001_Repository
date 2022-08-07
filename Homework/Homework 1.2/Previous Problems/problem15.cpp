/*
Name: Jack Bergin
Date: 01/18/20
Class: RBE 1001
Problem 15
Description: A boolean-valued function that determines 
whether an integer is a prime number.
*/

#include <iostream>
using namespace std;

int main()
{
    //Output on the input window
    cout<<"Enter a number n: \n";
   
    //The variable for n being declared
    int n;
    //The input to give n a value
    cin >> n;
    
    //First if statement will rule if n satisfys 
    //the requirement of being greater than 1
    if (n>1)
    {
       //This uses modular divison to determine 
       //whether the number n is odd (prime)
       //through using an if statemnt that if true 
       //or false uses boolean values to function
       if((n%2) != 0)
       {
           //Output on input window
           cout << n << " is a prime number.";
       }
       else
       {
           //Output on input window
           cout << n << " is not a prime number";
       }
    }
    //If the n value is too little then the program will be cut
    else
    {
        exit;
    }
}
