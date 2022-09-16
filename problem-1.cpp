#include <iostream>
using namespace std;
int main()
{

    int rows, i, j, k;
    int space = 1;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    rows = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= rows - space; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
    }
    return 0;
}