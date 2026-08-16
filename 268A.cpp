#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    vector<int> home(n);
    vector<int> away(n);

    for(int i=0;i<n;i++){
        cin >> home[i]>> away[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i] == away[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}