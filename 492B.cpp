#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    vector<double> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double ans = 0;

    // Maximum gap between two lanterns
    for(int i = 1; i < n; i++){
        ans = max(ans, a[i] - a[i-1]);
    }

    // Middle gaps need only half the distance
    ans = ans / 2;

    // Distance from 0 to first lantern
    ans = max(ans, a[0]);

    // Distance from last lantern to l
    ans = max(ans, l - a[n-1]);

    cout << fixed << setprecision(10) << ans;

    return 0;
}