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
 int i, num, count=0;

    cout<<"Enter the number";

    cin>>num;

    for(i = 2; i < num; i++)

    {

        if(num % i == 0)

        {

             count++;

             break;

        } 

    }

    if(count == 0)

    {

        cout<<"The number is prime";

    }

    else

    {

        cout<<"The number is not prime";

    }
   return 0;
}
