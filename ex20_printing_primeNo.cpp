/*
14) Write a Program to Display Prime Numbers Between
Two Intervals (entered by user)
Example:
Enter two numbers: 0 20
Prime numbers between 0 and 20 are:
2 3 5 7 11 13 17 19
*/
#include <iostream>
using namespace std;

int main(){

    int n, counting, ans;
    cin>> n;
    bool isPrime = true ;

    for(counting=2; counting<=n;counting++){
        
        for ( int i = 2; i<counting;i++){
            if(counting % i == 0){
                isPrime = false ;
                break ;
            }
            else{
                isPrime = true ;
            }
        }

        if (isPrime)
        {
            cout << counting << " " ;
        }
        
    }
    
}