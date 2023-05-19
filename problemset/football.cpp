#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;

    int len = s.length();

    int t1=0, t2=0;

    for(int i=0; i<len; i++) {
        if(s.at(i) == 1) {
            t1++;
            t2=0;
        }
        else {
            t2++;
            t1=0;
        }
    }
}

