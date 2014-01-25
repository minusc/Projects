/*
 Written by Romina Caraba

Program requirements:
1. For a given n, calculate the SUM of all numbers between 0 and n
2. For a given n, calculate the PRODUCT of all numbers between 0 and n 
3. For a given n, calculate the sum of the first n prime numbers

Cerinte program: 
1. Pentru un numar n, calculati suma primelor n numere
2. Pentru un numar n, calculati produsul primelor n numere
3. Suma primelor n numere prime.

*/

#include<stdio.h>

int suma(int n);

int produs(int n);

int sumaprim(int n);

int main()
{
	int i, c, fact = 1;
 	int n;
  int mySum;
  int  myProd;
  int primeSum;

   printf("Introdu valoarea numarului n\n");
   scanf("%d", &n);

	 mySum = suma(n);
	 printf("Suma primelor %d numere este: %d \n", n, mySum);

	 myProd = produs(n);
	 printf("Produsul primelor %d numere este: %d \n", n, myProd);

	 primeSum = sumaprim(n);
   printf("Suma primelor %d numere prime este: %d \n", n, primeSum);

   return 0;	
}


int suma(int n)
{	
	int m;
	int sumaNumerelor = 0;

	m = n + 1;
	sumaNumerelor = ((n*m) / 2.0);
	
	return sumaNumerelor;
}



int produs(int n)
{
	int i;
	int fact = 1;
	// fact = 1 * 2 * ... * n
	for (i = 1; i <= n; i++)
     fact = fact * i;
 
	return fact;
 }



int sumaprim(int n)
{
	 int count;
	 int i=3, c;
	 int sumaNrPrime = 0;

 
   if ( n >= 1 )
   {
			sumaNrPrime += 2; // adunam primul numar prim: 2 
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
				// daca numarul are divizor, inseamna ca nu e prim, si oprim for loop
         if ( i%c == 0 )
            break;
      }
			// break nu a fost chemat, deci numarul este prim:
      if ( c == i )
      {
				 sumaNrPrime += i; // adunam urmatoarele n-1 numere prime
         count++; 
      }
      i++;
   }	

	return sumaNrPrime;
}


