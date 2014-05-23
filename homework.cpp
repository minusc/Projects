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
#include<stdlib.h>


using namespace std;

void readArray(int array[], int size);
void printArray(int array[], int size);
void maxNumber(int array1[], int array2[], int size);
void ascend(int array1[], int size);
void descend(int array2[], int size);
void swapArrays(int array1[], int array2[], int size);

int main()
{
	int array_1[5];
	int array_2[5];
	int size=5;
	int maximum;
	
	int option;
	char optionTwo;


	cout<<"\nChoose the initial arrays:";
	cout<<"Insert the values for the first array: ";
   readArray(array_1,size);
   cout<<"Insert the values for the second array : ";
   readArray(array_2,size);

		cout<<"\n1. Read the values for the array\n"
				<<"2.Print the first or second array\n"
				<<"3.Print the sum of the maximum numbers in the arrays\n"
				<<"4.Ascending sort 1 / Descending sort 2\n"
				<<"5.Changing values between arrays\n"
				<<"6.Exit the program";
		cout<<"\n\nChoose a number that you want to use from the list above : ";
		cin>>option;

	bool optionNumber = false;	
	do
	{
	 switch(option)
	 {

		case 1:
				 cout<<"Insert the values for the first array: ";
             readArray(array_1,size);
             cout<<"Insert the values for the second array : ";
             readArray(array_2,size);
             break;

		case 2:
				 cout<<"\n Choose '1'  for printing the first table. Choose '2' for printing the second table: ";
             cin>>optionTwo;

				if(optionTwo == '1')	
				{
               cout<<"\nFirst Array: ";
               printArray(array_1,size);
              	
            }
				
				else
				{
				  if(optionTwo == '2')	
						{
               		cout<<"\nSecond Array: ";
               		printArray(array_2,size);
            		
            		}
						else cout<<"\nInvalid number.";
				break;				
				}		
				
				break;
		case 3:  maxNumber(array_1, array_2, size);
					break;

		case 4: cout<<endl;
				cout<<"\nAscending the first array... ";
				ascend(array_1,size);
				cout<<"\nDescending the second array... ";
				descend(array_2, size);
				break;

		case 5:
				swapArrays(array_1,array_2,size);
				break;

		case 6: optionNumber = true;
				break;
		default: cout<<"\nError. Option not possible. Please choose a valid number";
				break;
	  }
		if(option != 6)
		{
			cout<<"\nChoose another option from the menu"<<endl;
			cin>>option;
		}

	}
	while(!optionNumber); // While the option is in the menu, the code will continue
	return 0;
}

void readArray(int array[], int size)
{
	 int i;
	cout<<endl;
    for(i = 0; i < size; i++)
    {
        cout<< "Insert the array["<<i<<"] =";
        cin>>array[i];
    }


}
void printArray(int array[], int size)
{
	int i;
	cout<<"The numbers of the array are ";
	for(i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
	
}
void maxNumber(int array1[],int array2[], int size)
{
	int i;
	size=5;
	int max1 = 0;
	int max2 = 0;
	int maximum;

   for (i=0; i < size; i++)
   {
		if (array1[i] > max1)
	 	{
	   	 max1 = array1[i];
	 	}
   }
   for (i=0; i < size; i++)
   {
		if (array2[i] > max2)
	 	{
	   	 max2 = array2[i];
	 	}
   }
	maximum= max1 + max2;
	cout<<"\nThe sum of the maximum is " << maximum<<endl;
}

void descend(int array[], int size)
{ //buble sort
	int i;
	int temp;
	for (i = 0; i < size; i++)
		{
			for (int j = i+1; j < size ; j++)
			{
				//cout << array[i] << " ";
				if(array[j] > array[i])
				//swap the numbers
				{	temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					
				}
			}
		}
	for ( int i = 0 ; i < size; i++ )
	 {
	   cout << array[i] << " ";
	 }
}
	

void ascend(int array[], int size)
{
	int i;
	int temp;
	for (i = 0; i < size; i++)
		{
			for (int j = i+1; j < size ; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}	
		}
	for ( int i = 0 ; i < size; i++ )
	 {
	   cout << array[i] << " ";
	 }

}

void swapArrays(int array1[], int array2[], int size)
{
	for(int i = 0; i <=size ; i++)
	{
    array1[i] = array1[i] + array2[i];
    array2[i] = array1[i] - array2[i];    
    array1[i] = array1[i] - array2[i];
	}
	
	cout <<"\nThe elements for the first array are: ";
	for ( int i = 0 ; i < size; i++ )
	 {
	  cout<<array1[i] << " ";

	 }
	cout <<"\nThe elements for the second array are: ";
	for ( int i = 0 ; i < size; i++ )
	 {
	  cout<<array2[i] << " ";

	 }
	
}
