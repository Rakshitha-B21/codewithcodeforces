#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;  
    cin>>n;

    if(n %2 == 0){
        long long ans = n/2;
        cout<<ans<<endl;
    }
    else{
        long long ans = (n/2)-n;
        cout<<ans<<endl;
    }
    return 0;
}