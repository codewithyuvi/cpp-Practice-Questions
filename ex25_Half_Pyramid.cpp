#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the Value of n";
    cin >> n;

    int i,j;
    for(i=0; i<n;i++){

        for(j=0; j<=i; j++){

            cout << " * " ;
        }
        cout << endl ;
    }
    
    
}