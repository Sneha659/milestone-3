/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
   int n,fact = 1, i;
   cout<<"enter the number";
   cin>>n;
   for(i=1; i<=n; i++)
   fact = fact * i;
   cout<<"Factorial of "<<n<<" is "<<fact;
   return 0;
}