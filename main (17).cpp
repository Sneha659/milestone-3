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
    int num,i,n;
    cout << "Find prime numbers upto : ";
    cin >> n;

    cout << endl << "All prime numbers upto " << n << " are : " << endl;

    for(num = 2; num <= n; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }
        if(i != num) {
            cout << num << " ";
        }
    }

    return 0;
}
