/*
1) Solid Rectangular star
* * * * *
* * * * *
* * * * *
*/

#include <iostream>
using namespace std;
// Function to print solid rectangle
void solid_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int rows, columns;
    cout << "nEnter the number of rows : ";

    cin >> rows;
    cout << "nEnter the number of columns : ";
    cin >> columns;
    cout << endl;
    solid_rectangle(rows, columns);
    return 0;
}
