#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n){

    int remainder, powerTwo, sum = 0,i = 0 ;
    while(n != 0){
        remainder = n % 10 ;
        n = n/10;
        powerTwo = (remainder)*(pow(2, i));
        i++;
        sum = sum + powerTwo ;
    }
    cout << sum;

}

int main(){

    int n;
    cout<< "Enter a number ";
    cin >> n ;
    
    binaryToDecimal(n);
    

}
