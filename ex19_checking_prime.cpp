/*13) Write a Program to Check Whether a Number is Prime
or Not*/
#include <iostream>
using namespace std;

int main(){

    int n, ans;
    cout << "enter the value of n ";
    cin >> n;

    if(n == 0 || n==1){
        cout << "It's not a Prime Number ";
    }
    
    for(int i = 2 ; i<n; i++){

        if( n % i == 0 ){
            ans = false;
            break ;
        }

        else{
            ans = true;
        }

    }

    if(ans == 1){
        cout << "It's a Prime Number ";
    }
    else if(ans == 0){
        cout << "It's not a Prime Number ";
    }

}