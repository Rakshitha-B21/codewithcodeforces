#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int score;
    cin>>score;

    int mini = score;
    int maxi = score;
    int amazing = 0;

    for(int i=1;i<n;i++){
        cin>>score;

        if(score>maxi){
            amazing++;
            maxi = score;
        }
        else if(score<mini){
            amazing++;
            mini = score;
        }
    }

    cout<<amazing<<endl;
    return 0;
}