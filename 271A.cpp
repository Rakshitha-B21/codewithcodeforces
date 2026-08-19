#include<bits/stdc++.h>
using namespace std;

bool check(int year){
    string s = to_string(year);

    set<char> st;

    for(char c:s){
        st.insert(c);
    }
    return st.size()==s.size();
}

int main(){
    int y;
    cin>>y;

    y++;
    while(!check(y)){
        y++;
    }
    cout<<y<<endl;
    return 0;
}