//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include<iostream>

using namespace std;

int main()
{

	int i;
	int sum=0;
	
	for (i=0;i<1000;i++)
	{
		if(i%3==0)
			sum=sum+i;
		else
		{
			if(i%5==0)
				sum=sum+i;
	
		}	
	}	

	cout<<"The sum of the numbers that are multiples of 3 or 5 is "<<sum<<" \n";
	return 0;
}
