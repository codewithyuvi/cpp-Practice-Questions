/*
14) Write a Program to Display Prime Numbers Between
Two Intervals (entered by user)
Example:
Enter two numbers: 0 20
Prime numbers between 0 and 20 are:
2 3 5 7 11 13 17 19
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n,m, digit, cubing, armstrong=0;
    cin>> n;
    m=n;
    while(m!=0){
        digit = m%10 ;
        m = m/10 ;
        cubing = digit * digit * digit ;
        armstrong = armstrong + cubing ;

    }
    if(armstrong == n){
        cout << "Yes, Armstrong" ;
    }
    else{
        cout << "Not armstrong";
    }
}