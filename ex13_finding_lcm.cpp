#include <iostream>
using namespace std;


int main(){

    int n1, n2,max, lcm; 
    cin >> n1 >> n2 ;
    
    //finding max between n1 and n2
    if(n1>n2){
        max = n1;
    }
    else if(n2>n1){
        max = n2;
    }

    while(true){
        if(max%n1 == 0 && max%n2 == 0){
            lcm = max;
            break;
        }

        else{
            max++;
        }
    }

        cout << max;
}