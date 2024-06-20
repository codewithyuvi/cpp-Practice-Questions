#include <iostream>
using namespace std;


int main(){

    int n1, n2, hcf, temp;
    cin >> n1 >> n2 ;
  
    if(n2>n1){
        temp = n2;
        n2 = n1 ;
        n1 = temp ; 
    }

    for(int i = 1; i <=n2; i++){
        if( n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }

    cout << hcf ;



}