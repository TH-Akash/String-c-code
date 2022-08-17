#include <bits/stdc++.h>
using namespace std;

#define sort(v) sort(v.begin(),v.end());
#define vecprint(v){for(int i=0; i<v.size(); i++)cout << v[i] << " ";}
int main(int argc, char const *argv[]){

    long long n,t, y=0;
    string s,p;
    char ch;

    cin >>  t;

    while(t--){
        cin >> n;
        long long sum = (n*(n+1))/2;
        std::vector<long long> v, v1;
        int i=0;
        while(true){
            y = pow(2,i);
            if(y > n)
                break;
            v.push_back(y);
            i++;
        }
        v1.push_back(v[0]);
        for(int i=1; i<v.size(); i++){
            v1.push_back(v1[i-1]+v[i]);
        }

        cout << sum - (2*v1[i-1]) << endl;

    }
    return 0;
}
