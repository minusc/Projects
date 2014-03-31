#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void printTable(char t[])
{
	cout<<"|---|---|---| \t |---|---|---| \n" 
		 <<"|"<<setw(2)<<t[0]<<setw(2)<<"|"<<setw(2)<<t[1]<<setw(2)<<"|"<<setw(2)<<t[2]<<setw(2)<<" | \t | 1 | 2 | 3 |\n"
		 <<"|---|---|---| \t |---|---|---| \n" 
		 <<"|"<<setw(2)<<t[3]<<setw(2)<<"|"<<setw(2)<<t[4]<<setw(2)<<"|"<<setw(2)<<t[5]<<setw(2)<<" | \t | 4 | 5 | 6 |\n"
		 <<"|---|---|---| \t |---|---|---| \n" 
		 <<"|"<<setw(2)<<t[6]<<setw(2)<<"|"<<setw(2)<<t[7]<<setw(2)<<"|"<<setw(2)<<t[8]<<setw(2)<<" | \t | 7 | 8 | 9 |\n"
		 <<"|---|---|---| \t |---|---|---| \n"; 


}

int computerTurn( char t[])
{
	int iRand = (rand() % 9) + 1;
	bool foundUniqueIndex = 0;
	while(foundUniqueIndex == 0)
	{  
			if ( t[iRand-1] != 'X' and t[iRand-1] != 'O')
			{ 
				foundUniqueIndex = 1;
				return iRand;
			}
			else
			{ 
				iRand = (rand() % 9) + 1;
			}
		
	}
}

void verifyTable(char t[], bool &noOneWon, char whoStarts)
{
	if (t[0] == 'X' and t[1] =='X' and t[2]=='X')
	{
		if (whoStarts == 'y') //WON
			cout<<"You won!"<<endl;
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
	
	if (t[0] == 'O' and t[1] =='O' and t[2] == 'O')	
	{	
		if(whoStarts == 'n')
			cout<<"You won"<<endl;	
		else
			cout<<"You lost!"<<endl;//LOST
		noOneWon = 0;
	}


	if (t[3] == 'X' and t[4] =='X' and t[5]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
	
	if (t[3] == 'O' and t[4] =='O' and t[5] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}


	if (t[6] == 'X' and t[7] =='X' and t[8]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;	}
	
	if (t[6] == 'O' and t[7] =='O' and t[8] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}

	
	if (t[0] == 'X' and t[3] =='X' and t[6]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;	}
	
	if (t[0] == 'O' and t[3] =='O' and t[6] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;	}

	if (t[1] == 'X' and t[4] =='X' and t[7]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
	
	if (t[1] == 'O' and t[4] =='O' and t[7] == 'O')	
	{	
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}

	if (t[2] == 'X' and t[5] =='X' and t[8]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
	
	if (t[2] == 'O' and t[5] =='O' and t[8] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}

	if (t[0] == 'X' and t[4] =='X' and t[8]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
	
	if (t[0] == 'O' and t[4] =='O' and t[8] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}

	if (t[2] == 'X' and t[4] =='X' and t[6]=='X')
	{
		if(whoStarts == 'y')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;	}
	
	if (t[2] == 'O' and t[4] =='O' and t[6] == 'O')	
	{
		if(whoStarts == 'n')
			cout<<"You won"<<endl; 
		else
			cout<<"You lost!"<<endl;
		noOneWon = 0;
	}
}
int main()
{
	int i, n=0;
	char t[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char whoStarts = 'n'; // by default the computer will start
	int userInput;
	int computerInput;
	bool noOneWon= '1'; // boolean variable to keep track if the game has been won
	cout<<"****************************"<<endl;
	cout<<"Tic-Tac-Toe Game"<<endl;
	cout<<"Instructions:"<<endl;
	cout<<" - the game will be played in the left table \n"
			<<" - use the table in the right to choose the location where you want to insert your X or O"<<endl;

	cout<<"|---|---|---| \t |---|---|---| \n" 
		 <<"|   |   |   | \t | 1 | 2 | 3 |\n"
		 <<"|---|---|---| \t |---|---|---| \n" 
		 <<"|   |   |   | \t | 4 | 5 | 6 |\n"
		 <<"|---|---|---| \t |---|---|---| \n" 
		 <<"|   |   |   | \t | 7 | 8 | 9 |\n"
		 <<"|---|---|---| \t |---|---|---| \n"; 

	cout<<" Do you want to start ? (y/n)   ";
	cin>>whoStarts;
	if (whoStarts == 'y')
	{
		cout<<"Okay, you will start. ";
		n = 0;
		while (n<5 and noOneWon)
		{
			cout<<"Please choose a location, using the table from the right."<<endl;
			cin>>userInput;
			
			// set the value entered by the user to X
			t[userInput-1] ='X';
			
			// if at least 3 numbers have been entered by the user verify if anyone won
			if (n>=2)
				verifyTable(t, noOneWon, whoStarts);

			// get the computer input and set it to O
			computerInput = computerTurn(t);
			t[computerInput-1] = 'O';
			
			//print the table
			printTable(t);

			// after the computer entered the number and the user has had at least 3 turns, verify if anyone won
			if (n>=2)
				verifyTable(t, noOneWon, whoStarts);

			n++;
		}
		// if no one won, then print out It's a draw.
		if (noOneWon == 1)
			cout<<"It's a draw. Goodbye"<<endl;
	}
	else
	{
		cout<<"Okay, the computer will start."<<endl;
		n=0;
		while (n<5 and noOneWon)
		{
			
		// the computer will chose a location
			computerInput = computerTurn(t);
			t[computerInput-1] = 'X';

		// show the table
			printTable(t);

		// verify if anyone won
			if (n>=2)
				verifyTable(t, noOneWon, whoStarts);

			
			cout<<"Please choose a location, using the table from the right."<<endl;
			cin>>userInput;
			
			t[userInput-1] ='O';

		// show the table after the user inputs
			printTable(t);
			
			if (n>=2)
				verifyTable(t, noOneWon, whoStarts);

			n++;
		}

		if (noOneWon == 1)
			cout<<"It's a draw. Goodbye"<<endl;
	}	
	
}
