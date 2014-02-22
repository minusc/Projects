// Write a program that outputs the Even Fibonacci numbers.
// The Fibonacci numbers are 1 2 3 5 8 13 21 34 55 89
#include<iostream>

using namespace std;

int main()
{
	int x,y,z;
	x=1; // x represents the actual number
	y=1; // y represents the previous number
	z=1; // z is used so he could represent the x actual number for the future calculations
 
	cout<<"The Even Fibonacci numbers less than 4 milions are: ";
 
	
	do
	{
		z=x;
		x=x+y;
		y=z;
		
		if(x%2==0)
			cout<<x<<" \n";

	}
	while(x<4000000);

	return 0;
}
