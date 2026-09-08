#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    string ans = "";
    int i = 0, step = 1;

    while(i<n){
        ans += s[i];
        i += step;
        step++;
    }

    cout<<ans<<endl;
    return 0;
}