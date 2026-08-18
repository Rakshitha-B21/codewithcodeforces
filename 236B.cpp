#include<bits/stdc++.h>
using namespace std;
int CntDiv(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            cnt ++;
        

            if(i != n/i){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    long long ans = 0;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int product = i*j*k;

                ans += CntDiv(product);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}