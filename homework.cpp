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

void readArray(int array[], int size);
void printArray(int array[], int size);
void maxNumber(int array1[],int array2[], int size);

int main()
{
	int array_1[5];
	int array_2[5];
	int size=5;
	
	int option;
	int optionTwo;

	int countProgram=0;

//	while(countProgram==0)
//	{
		
		cout<<"1. Read the values for the array\n"
				<<"2.Print the first or second array\n"
				<<"3.Print the sum of the maximum numbers in the arrays\n"
				<<"4.Ascending sort 1 / Descending sort 2\n"
				<<"5.Changing values between arrays\n";
		cout<<"\n\nChoose a number that you want to use from the list above : ";
		cin>>option;


//	}
	switch(option)
	{
		case 1:
				 cout<<"Insert the values for the first array \n";
             readArray(array_1,size);
             cout<<"Insert the values for the second array : \n";
             readArray(array_2,size);
             break;
		case 2:
				 cout<<"Choose '1'  for printing the first table. Choose '2' for printing the second table: \n";
             cin>>optionTwo;

				if(optionTwo == '1')	
				{
               cout<<"First Array : \n";
               printArray(array_1,size);
              
            }
				if(optionTwo == '2')	
				{
               cout<<"Second Array : \n";
               printArray(array_2,size);
              
            }
				break;
		case 3: maxNumber(array_1,array_2,size);
              break;
	}

	return 0;
}

void readArray(int array[], int size)
{
	 int i;
    for(i = 0; i < size; i++)
    {
        cout<< "Insert the array["<<i<<"] =";
        cin>>array[i];
    }


}
void printArray(int array[], int size)
{
	int i;
	cout<<"The numbers of the array are";
	for(i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
	
}
void maxNumber(int array1[],int array2[], int size)
{
	int i;
	int array[10];
	cout<<"The maximum value in the arrays are:";
	for(i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }

}


