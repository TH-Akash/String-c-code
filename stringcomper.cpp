#include<iostream>
#include<string>

using namespace std;
int main(){
    string s1="abchhfds";
    string s2="abosd";
    s1.erase(3,4);
    cout<<s2.find("os")<<endl;
    cout<<s1<<endl;
    cout<<s2.compare(s1)<<endl;

    s2.insert(2,"lol");
    cout<<s2<<endl;

    cout<<s2.size()<<endl;
    for(int i=0;i<s2.length();i++){
        cout<<s2[i]<<endl;
    }
    return 0;

}

