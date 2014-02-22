#include<iostream>

using namespace std;

int main()
{
	
	int i=1;
	int n=100;

	cout<<"The program will output the numbers to 100,"
		 <<" but the number divisible by 3 will be printed as 'Crackle'.\n"
		 <<"The ones divisible by 5 will be printed as 'Pop'\n"
		 <<" while the ones divised by both will be printed as 'CracklePop'\n";
	

	for(i=1;i<=n;i++)
	{ 

			 if (i%3==0 && i%5==0)
				cout<<" CracklePop ";

			else
			{
		
			 	if(i%3==0)
					cout<<" Crackle ";

				else 
				{  
					if(i%5==0)
						cout<<" Pop ";
					else
						cout<<i<<" ";
				}
			}
	}
	cout<<endl;
	return 0;

}
