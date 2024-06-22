#include <iostream>
using namespace std;


int main(){

int number, remainder;
cin >> number;


while(number != 0){
    
    remainder = number%10 ;
    number = number/10 ;
    
    cout << remainder;
}

}
