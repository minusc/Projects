/* Write a program that inputs a number n and iterates through the Babylonian algorithm five times, and outputs the answer.
The Babylonian algorithm to compute the square root of a positive number n is as follows:

1. Make a guess at the answer(=n/2)
2. Compute r=n/guess
3. Set guess=(guess+r)/2
4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3 are repeated, the closed guess will become to the square root of n.

*/

#include<iostream>

using namespace std;

int main()
 
{
// r is used for representing the square root the number n
    double r;

    double n;
// guess and prevGuess are the guesses that the computer makes.
    double guess, prevGuess;

//You will have to enter the number you want to the square root of, so it must me a positive number.
    cout<<"What positive number do you want to compute the square root of?"<<endl;
    cin>>n;
 
    guess = n / 2.0;
 
    prevGuess = guess;
 //For the next part the code will be compiled and the loop will be iterated for 5 times
    for(int i=1;i<=5;i++)
    {
         
        r=n/guess;
 
        prevGuess=guess;
 
        guess=(guess+r)/2;
    }

    cout<<endl;
//The result for the root of the numer, r, will be displayed
    cout<<"The square root of the number is "<<r<<endl;
}
