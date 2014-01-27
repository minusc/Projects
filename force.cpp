/*
THe gravitational attractive force  between two bodies with masses m1 and m2 separated by a distance d is given by the formula

	F= (G*m1*m2)/d

where G is the universal gravitational.
Write a function definition that takes arguments for the masses of two bodies and the distance between them and returns the gravitational force between them.

*/

#include<iostream>

using namespace std;

int main()

{
	//m1 means the mass of the first object

	//m2 means the mass of the second object

	//G is the gravitational force

	//F is the force that applies betweent the two masses
	double G, F, m1,m2,d,gravity;


	int again=1;	

	//G= 6.673.10-8 dyne.cm2/g2
	gravity=(6.673e-08);
	
	LOOP:if(again==1)

	do	
	{
//The user will input the distance, the mass for the first object and then the second
		cout<<"Give the distance between the masses  d=";
		cin>>d;	
		cout<<endl;

		cout<<"Give the mass for the first object m1=";
		cin>>m1;	
		cout<<endl;

		cout<<"Give the mass for the second object m2= ";
		cin>>m2;
		cout<<endl;		
	
//The force that applies between masses, F is next to be calculate
		F=((gravity*m1*m2)/(d*d));
		cout<<"F = "<<F<<endl;

//If the user whishes to calculate again for other values, now it's the chance to do so.
   	cout<<"Calculate again for other values? press 1 for true, or 0 for false"<<endl;
		cin>>again;

		if(again==1)

   		goto LOOP;

		else 	cout<<" "<<endl;

	}

	while (again==1);

	return 0;
}
