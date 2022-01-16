/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
   int i,num1,num2,hcf=1,min;
   cout<<"Enter any two numbers:";
    cin>>num1;
    cin>>num2;
    min = (num1<num2) ? num1 : num2;
 
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
 
    cout<<"HCF of "<<num1<< " and "<< num2<< " is: " <<hcf;
    return 0; 
}