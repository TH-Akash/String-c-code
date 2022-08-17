#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
}
