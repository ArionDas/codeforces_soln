#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;

        int len = str.length();
        if(len > 10) {
            int length_required = len-2;
            string req_string = str.at(0) + to_string(length_required) + str.at(len-1);

            cout << req_string << endl;
        }
        else
            cout << str << endl;
    }
}