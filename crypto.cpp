/* 
In cryptharitmetic puzzles, mathematical equations are written using letters. Each letter can be a digit from 0 to 9, but no two letters can be the same. Here is a sample problem:	

	SEND + MORE = MONEY

A solution to the puzzle is S=9, R=8, O=0, M=1, Y=2, E=5, N=6, D=7.
Write a program that finds solutions to the following cryptarithmetic puzzle:

	TOO + TOO + TOO + TOO = GOOD

*/
#include<iostream>

using namespace std;

int main()

{

	int T,O,G,D;

	for(T=0;T<10;T++)
	{

		for(O=0;O<10;O++)
		{

			for(G=0;G<10;G++)
			{

				for(D=0;D<10;D++)
				{

					if( (T==O) || (T==G) || (T==D) || (D==O) || (D==G) || (G==O) )

					continue;

					else if( (T*100+O*10+O*1) + (T*100+O*10+O*1) + (T*100+O*10+O*1) + (T*100+O*10+O*1) == (G*1000+O*100+O*10+D*1))	

					   { cout<<"T= "<<T<<"\n";

					  		cout<<"G= "<<G<<"\n";

					  		cout<<"D= "<<D<<"\n";

					  		cout<<"O= "<<O<<"\n";
					   }
				}
			}
		}
	}

	cout<<"TOO+TOO+TOO+TOO=GOOD has the value\n"<<(T*100+O*10+O*1)<<" + "<<(T*100+O*10+O*1)<<" + "<<(T*100+O*10+O*1)<<" + "<<(T*100+O*10+O*1)<<" == "<<(G*1000+O*100+O*10+D*1)<<"\n";

	return 0;
}
		
