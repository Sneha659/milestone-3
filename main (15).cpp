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
   int num,rev=0,val;
   cout<<"enter a number";
   cin>>num;
   val = num;
   while(num > 0) {
      rev = rev * 10 + num % 10;
      num = num / 10;
   }
   if(val==rev)
   cout<<val<<" is a palindrome"<<endl;
   else
   cout<<val<<" is not a palindrome"<<endl;
   return 0;
}
