#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ifstream f("grid.txt");
	int m=20,n=20, A[20][20];
	int maxproduct=1;
	int product1, product2, product3, product4;
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
				f >> A[i][j];
			
	for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout<<A[i][j]<<" ";
			}	
			cout<<endl;
		}
	
	for(int i=0 ; i<(m-3) ; i++)
	{
		 int	j;
		 j=i;
		
				product1= A[i][j] * A[i+1][j] * A[i+2][j] * A[i+3][j];
				product2= A[i][j] * A[i][j+1] * A[i][j+2] * A[i][j+3];		
				product3= A[i][j] * A[i+1][j+1] * A[i+2][j+2] * A[i+3][j+3];
				product4= A[i][j+3] * A[i+1][j+2] * A[i+2][j+1] * A[i+3][j];
	
				if ( maxproduct < product1)
						maxproduct = product1;

				if (maxproduct < product2)
						maxproduct = product2;

				if (maxproduct < product3)	
						maxproduct = product3;			

				if (maxproduct < product4)
						maxproduct = product4;
						
	}
	cout<<"Max product of 4 numbers is "<< maxproduct<<endl;
	return 0;
}
