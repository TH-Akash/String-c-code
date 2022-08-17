#include <iostream>
using namespace std;

int main()
{

    string s,rev;
    getline(cin,s);
    for(int i=s.size()-1; i>=0; i--)
    {

        //rev = rev + s[i];
        rev.push_back(s[i]);
    }
    cout<<rev.size()<<endl;
    cout<<rev<<endl;

    return 0;
}
