#include <iostream>

using namespace std;

void unitate(double a[][10], int n);

int main()
{
    int n, i, j;
    double a[10][10];

    cout << "n = "; cin >> n;

    //  initialize the unity array
    unitate(a, n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

void unitate(double a[][10], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ( i + j == n - 1 )// the element is on the secondary diagonal
                a[i][j] = 1.0;
            else
                a[i][j] = 0.0;
}
