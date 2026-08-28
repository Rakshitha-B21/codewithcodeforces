#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int upper = 0;

    for(char c : s) {
        if(isupper(c))
            upper++;
    }

    if(upper == s.size()) {
        for(char &c : s)
            c = tolower(c);
    }
    else if(upper == s.size() - 1 && islower(s[0])) {
        s[0] = toupper(s[0]);

        for(int i = 1; i < s.size(); i++)
            s[i] = tolower(s[i]);
    }

    cout << s << endl;

    return 0;
}