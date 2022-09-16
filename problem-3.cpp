#include <iostream>
using namespace std;
int main()
{

    int row, i, j, k;
    cin >> row;
    int space = row - 1;
    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= i; j++)
        {

            if (j == i)
            {
                cout << "&";
            }
            else
            {
                cout << "#";
            }
        }
        for (k = i; k <= row - 1; k++)
        {
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}