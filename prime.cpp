/*
	Write a program that give all the prime numbers between 3 and 100
*/

#include<iostream>

using namespace std;

int main()

{

   int number=3,i;
	bool eprim=1;

   cout<<"The following numbers are prime numbers: ";   

//The for loop calculates how many prime numbers are between 3 and 100. And it once for a number. If it is a prime one, it would be displayed. 	
   for(number=3;number<100;number++)
    {
	
		eprim=1;
		for(i=2;i<(number-1);i++)
	   { 

//The if condition is used to see if the number is  
			 if(number%i==0)
		 	 eprim=0;
	   }		

		if (eprim==1)
	   {
			cout<<"The number is prime: "<<number<<endl;
	   }		

		   
 	}

	return 0;
}

