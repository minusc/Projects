#include<iostream>

using namespace std;

int main()

{

   int number=1,i;
	bool eprim=1;
	int sum=1;

   //cout<<"The following numbers are prime numbers: ";   

   for(number=1;number<2000000;number++)
    {
	
		eprim=1;
		for(i=2;i<(number-1);i++)
	   { 

//The if condition is used to see if the number is  prime
			 if(number%i==0)
		 	 eprim=0;
	   }		

		if (eprim==1)
	   {	//cout<<" ";
		//cout<<"The number is prime: "<<number<<endl;
//If the number is prime, it will be added in the sum
			sum=sum+i;
	   }		

		   
 	}
	cout<<"The sum is "<<sum<<endl;
	return 0;
}

