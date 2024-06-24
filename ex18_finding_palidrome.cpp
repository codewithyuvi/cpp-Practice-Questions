/*12) Write a Program to Check Whether a Number N
entered by user is Palindrome or Not
*/
#include <iostream>
using namespace std;

int main(){

    int n, remainder, m, storing_remainder=0 ;
    cout << "enter the value of n ";
    cin >> n;
    m = n;
    while(m != 0 ){

        remainder = m % 10 ;
        m= m / 10;
        storing_remainder =  (storing_remainder*10) + remainder ; 

    }
    cout << endl ;
    if(storing_remainder == n){
        cout << "Yes its a Palindrome";
    }
    else{
        cout << "It's not a Palindrome";
    }

}