/* Homework project
	Write a program that creates two arrays of lenght five. Using a menu, the user will choose one of the following:
		1. Read the values for the array
		2.Print the first or second array
		3.Print the the maxim sum out of the arrays
		4.Ascending sort 1 / Descending sort 2
		5.Changing values between arrays
*/


#include<iostream>
#include<string>

using namespace std;

void readArray(int tab[], int size);
void printArray(int tab[], int size);
void maxNumber(int tab1[],int tab2[], int size);

int main()
{
	int array_1[5];
	int array_2[5];
	int size=5;
	
	int option;
	char optionTwo[6];

	int countProgram=0;

	while(countProgram==0)
	{
		
		cout<<"1. Read the values for the array\n"
				<<"2.Print the first or second array\n"
				<<"3.Print the the maxim sum out of the arrays\n"
				<<"4.Ascending sort 1 / Descending sort 2\n"
				<<"5.Changing values between arrays\n";
		cout<<"\n\nChoose a number that you want to use from the list above : ";
		cin>>option;


	}


	return 0;
}

/*void readArray(int tab[], int size)
{
	


}
void printArray(int tab[], int size)
void maxNumber(int tab1[],int tab2[], int size)
*/

