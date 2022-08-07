/*
Name: Jack Bergin
Date: 01/18/20
Class: RBE 1001
Programming Problem 3 
Description: Fibonacci sequence
*/

#include <iostream>
using namespace std;

int main()
{
    //Output on the input window
    cout << "Fibonacci sequence: \n";
    
    //Creation of the n value
    int n;
    //Entering of the variable value
    cin >> n;
    
    //The declaration of these variables is to 
    //compound them into the fibonacci sequence.
    int seq1 = 0;
    int seq2 = 1; 
    int seqN = 0;
    
    //Output on the input window
    cout << "Fibonacci Series: \n";
    
    //For loop that allows for the fibonacci sequence to execute n number of times
    for (int i = 1; i < n; ++i)
    {
        //This allows for the 1 to be repeated in the sequence
        if(i == 2)
        {
            //Output on the input window
            cout << seq2 << ", ";
        }
        //These define the subsequent terms of the fibonacci sequence
        seqN = seq1 + seq2;
        seq1 = seq2;
        seq2 = seqN;
        
        //Output on the input window
        cout << seqN << ", ";
    }
    
}
