#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n] = {0};

    int i;
    if (n % 2 == 0)
    {
        int k = 1;
        for (i = 0; i < n / 2; i++)
        {
            a[i] = k;
            k = k + 2;
        }
        // cout << i << endl;
        k = 2;
        for (int j = i; j < n; j++)
        {
            // cout << j << endl;
            a[j] = k;
            k = k + 2;
        }
    }

    else
    {
        int k = 1;
        for (i = 0; i <= (n / 2) + 1; i++)
        {
            a[i] = k;
            k = k + 2;
        }

        k = 2;
        for (int j = i-1; j < n; j++)
        {
            a[j] = k;
            k = k + 2;
        }
    }

    //  for (int i = 0; i < n; i++)
    //      cout << a[i] << " ";

    int key;
    cin >> key;

    cout << a[key - 1] << endl;
}