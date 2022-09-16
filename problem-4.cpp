#include <iostream>
using namespace std;
int main()
{

    int rows;
    cin >> rows;
    int lpr = rows;
    int temp2 = rows - 1;
    int i, j, k, y, x;
    int a, b, c, spaces = 1;
    for (y = 1; y <= rows; y++)
    {
        spaces = y * 2;
        // first catagory
        for (a = 1; a <= temp2; a++)
        {
            cout << "#";
        }
        // spaces
        for (b = 1; b <= spaces; b++)
        {
            cout << " ";
        }

        // second catagory

        for (c = temp2; c >= 1; c--)
        {
            cout << "#";
        }
        cout << endl;
        temp2--;
    }
    cout << endl;

    // Last Half start
    // variable
    int e, r;
    lpr -= 1;
    int temp;
    spaces = (lpr * 2) - 1;
    for (x = 1; x <= lpr; x++)
    {
        for (e = 1; e <= x; e++)
        {

            cout << "#";
        }
        for (r = spaces; r >= 0; r--)
        {
            cout << " ";
        }
        for (int t = 1; t <= x; t++)
        {

            cout << "#";
        }
        cout << endl;
        spaces = spaces - 2;
    }
    return 0;
}