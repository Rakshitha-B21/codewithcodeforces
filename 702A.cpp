#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int prev;
    cin>>prev;

    int ans = 1;
    int cnt = 1;

    for(int i=1;i<n;i++){
        int curr;
        cin>>curr;

        if(curr>prev){
            cnt++;
        }else{
            cnt = 1;
        }
        ans = max(ans, cnt);
        prev = curr;
    }
    cout<<ans<<endl;
}