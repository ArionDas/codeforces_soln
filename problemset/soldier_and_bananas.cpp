#include<bits/stdc++.h>
using namespace std;

int cost(int a, int b) {
    return a*((b*(b+1))/2);
}

int main() {
    int k,n,w;
    cin >> k >> n >> w;

    int cost_req = cost(k, w);

    if(cost_req>=n)
        cout << cost_req-n << endl;
    else
        cout << "0" << endl;
}