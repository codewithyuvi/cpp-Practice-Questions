#include <iostream>
using namespace std;
// Function to print hollow rectangle*/
void hollow_rectangle(int row, int col){

    int i, j;
    for (i = 1; i <= row; i++){

        for (j = 1; j <= col; j++){

            if (i == 1 || i == row || j == 1 || j == col){
                cout << "*";
            }
            else if (i != 1 || i != row || j != 1 || j != col){
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main(){

    int row, col;
    cout << "Enter the Value of row";
    cin >> row;
    cout << "Enter the Value of Column";
    cin >> col;

    hollow_rectangle(row, col);
}