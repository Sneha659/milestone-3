/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main() {
   int num, i;
   cout<<"enter the number";
   cin>>num;
   cout << "The factors of " << num << " are : ";
   for(i=1; i <= num; i++) {
      if (num % i == 0)
      cout << i << " ";
   }
   return 0;
}
