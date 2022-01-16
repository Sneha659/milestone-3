/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<iostream>

using namespace std;

int main()
{
	int number, rem, Product = 1;
	
	cout << "\n Enter the Number to find the Digits Product =  ";
	cin >> number;
	
	while (number > 0)
	{
    	rem = number % 10;
    	Product = Product * rem;
    	number = number / 10;
    	
	}
	cout << "\nThe Product of all Digits in a given Number = " << Product;
		
 	return 0;
}
