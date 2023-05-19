#include<bits/stdc++.h>
using namespace std;

int sum=0;

int function_sum(int n) {

    // base case
    if(n == 0)
        return sum;
    
    // processing
    if(n%2 != 0)
        sum = sum - n;
    else
        sum = sum + n;
    
    // recursive relation
    function_sum(n-1);

    return sum;
}

int main() {

    //cout << "Enter the number " << endl;
    int n;
    cin >> n;

    cout << function_sum(n) << endl;
}