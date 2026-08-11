#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int minind = 0;
int maxind = 0;

for(int i=1;i<n;i++){
    if(arr[i]>arr[maxind])
        maxind = i;
       
    if(arr[i]<=arr[minind])
        minind = i;     
}

int swap = maxind+(n-1-minind);

if(maxind > minind)
    swap--;

cout<<swap<<endl;    
}