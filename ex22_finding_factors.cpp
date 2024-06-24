/*
16) Write a Program to Display all Factors of a Number
entered by User
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factors of " << n << " are: ";
    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}