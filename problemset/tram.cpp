#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i];
    
    int min__capacity=b[0];
    int temp=b[0];
    for(int i=0; i<n-1; i++){
        temp = temp - a[i+1] + b[i+1];
        if(min__capacity < temp)
            min__capacity = temp;
    }

    cout << min__capacity << endl;
}