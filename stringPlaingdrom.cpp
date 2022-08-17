#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s_rev;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){
        s_rev=s_rev+s[i];
    }
    //cout<<s_rev<<endl;
    if(s==s_rev){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"N0"<<endl;
    }
}
