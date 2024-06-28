#include <iostream>
using namespace std;

int decimalToBinary(int n){
    
    int factor, no_of_digits = 0;
    int i = 0;
    int arr[100000];
    while (n != 0){
        factor = n % 2;
        n = n / 2;
        arr[i] = factor;
        i++;
        no_of_digits++;
    }
    cout << endl;

    for (int j = 0; j < no_of_digits; j++){

        cout << arr[(no_of_digits - 1) - j];
    }
}
int main(){

    int n;
    cout << "Enter a Demical number ";
    cin >> n;

    decimalToBinary(n);
}



