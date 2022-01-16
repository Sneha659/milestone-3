/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int number, rem, Sum;
	
	cout <<"Enter the Number =  ";
	cin >> number;
	
	for(Sum = 0; number > 0; number = number / 10)
	{
    	rem = number % 10;
    	Sum += rem;
    	
    	cout << "\nDigit = " << rem << " and the Digit Sum = " << Sum;
	}
	cout << "\nThe Sum of all Digits in a given Number = " << Sum;
		
 	return 0;
}
