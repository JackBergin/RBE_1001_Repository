/*
Name: Jack Bergin
Date: 01/18/20
Class: RBE 1001
Problem 3
Description: A combination of problems 7 and 15
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
    
    //Variable used to sum the n sequence in the for loop
    int sum;
    
    //For loop that will sum up numbers 1 to n
    for(int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    cout << "The sum of your sequence to the nth term is " << sum << ". \n";
    
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
