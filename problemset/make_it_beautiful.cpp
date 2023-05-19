#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        bool b = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
            {
                if (a[i] != a[i - 1])
                {
                    b = 0;
                }
            }
        }

        if (!b)
        {
            sort(a, a + n);
            cout << "YES" << endl;
            for (int i = n - 1; i >= 0; i--)
                cout << a[i] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
}