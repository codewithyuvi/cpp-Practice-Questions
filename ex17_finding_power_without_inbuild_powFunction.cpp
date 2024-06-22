#include <iostream>
using namespace std;

int main(){

    int base, exponent, power;
    cin >> base >> exponent;
    power = base ;
    for( int i = 1; i<exponent;i++){
        power = power * base;
    }
    cout << power ;

}