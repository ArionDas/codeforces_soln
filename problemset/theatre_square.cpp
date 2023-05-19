#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int ht = n;
    int wd = m;

    int c = 0;
    int d = 0;

    while (n > 0)
    {
        c++;
        n = n - a;
    }
    while (m > 0)
    {
        d++;
        m = m - a;
    }
    if (a > ht && a > wd)
        cout << "1" << endl;
    else
        cout << c * d << endl;
}