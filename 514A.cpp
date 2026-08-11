#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';

        if(i == 0 && digit == 9) {
            continue;
        }

        if(digit >= 5) {
            s[i] = (9 - digit) + '0';
        }
    }

    cout << s << endl;

    return 0;
}