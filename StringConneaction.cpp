#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,len=0;
    char s[50]=" my name is";
    char c[20]="Akash";
    while(s[i]!='\0')
    {
        i++;
        len ++;
    }
    //cout<<len<<endl;
    while(c[j]!='\0')
    {

        s[len+j]=c[j];
        j++;
    }
    cout<<s<<endl;

}
