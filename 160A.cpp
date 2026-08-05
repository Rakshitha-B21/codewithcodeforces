#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    int my_sum=0;
    int count=0;

    for(int coin : coins){
        my_sum += coin;
        count++;

        if(my_sum > sum-my_sum){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
    
}