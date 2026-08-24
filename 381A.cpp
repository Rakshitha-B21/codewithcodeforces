#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int l=0,r=n-1;
    int sereja = 0,dima=0;

    bool turn = true;

    while(l<=r){
        int value;
        if(a[l]>a[r]){
            value=a[l];
            l++;
        }
        else{
            value=a[r];
            r--;

        }

        if(turn){
            sereja += value;
        }
        else{
            dima += value;
        }
        turn = !turn;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}