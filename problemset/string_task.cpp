#include<bits/stdc++.h>
using namespace std;

bool check_case(char c) {
    if(c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}

bool check_vowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    else
        return 0;
}

string changed_string(string s) {
    int len = s.length();

    for(int i=0; i<len; i++) {
        if(!check_case(s.at(i)))
            s = s.substr(0, i-1) + (s.at(i) - 'A' + 'a') + 
    }

    for(int i=0; i<len; i++) {
        if(check_vowel(s.at(i)))
            s = s.substr(0, i-1) + s.substr(i+1, len-1);
    }
}

int main() {
    string s;
    cout << "Enter the string " << endl;
    cin >> s;

    cout << changed_string(s) << endl;
}