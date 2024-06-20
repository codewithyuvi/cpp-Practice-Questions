#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double max = a;

    double arr[3] = {a, b, c};
    for(int i=0; i<3; i++){

        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max ;

}