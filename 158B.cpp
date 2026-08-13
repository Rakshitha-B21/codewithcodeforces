#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int one = 0, two = 0, three = 0, four = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            one++;
        }
        else if(a[i] == 2) {
            two++;
        }
        else if(a[i] == 3) {
            three++;
        }
        else {
            four++;
        }
    }

    int ans = 0;

    ans += four;

    ans += three;
    one -= min(one, three);

    ans += two / 2;
    two %= 2;

    if(two == 1) {
        ans += 1;
        one -= min(one, 2);
    }

    ans += (one + 3) / 4;

    cout << ans << endl;

    return 0;
}