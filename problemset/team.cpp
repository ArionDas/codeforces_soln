#include <bits/stdc++.h>
using namespace std;

int sum(int a[])
{
    int s = 0;
    for (int i = 0; i < 3; i++)
        s += a[i];
    return s;
}

int main()
{
    int t;
    cin >> t;
    int c=0;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        
            if (sum(a) >= 2)
                c++;  
    }
    cout << c << endl;
}