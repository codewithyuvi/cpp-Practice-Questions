#include <iostream>
using namespace std;

int main(){

int number, remainder, sum=0;
cin>>number;

while(number != 0){

    remainder = number % 10 ;
    sum = sum + remainder ;
    number = number / 10;

}

cout << sum ;




}