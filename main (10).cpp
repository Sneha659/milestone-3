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
    int number;
    cout << "Enter a number : " << endl;
    cin >> number;

    cout << "Last digit is : " << number % 10 << endl;

    while(number >= 10){
        number = number/10;
    }

    cout<< "First digit is : "<< number << endl;
    return 0;
}
