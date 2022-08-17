#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nx, i, j, k;
    cin >> nx;

    for (i=0; i<nx; i++)
    {
        cout <<"Case "<< i+1 << ":" << endl;
        long long N, M;
        cin >> N >> M;
        long long value, evn=0, odd=0;
        value = abs(N-M)+1;

        if (value==1)
        {
            if (N%3==1) { evn++;  }
            else { odd++; }
        }

        else
        {
            long long n,m;
            if (M>N) { n=N; m=M; }
            if (N>M) { n=M; m=N; }

            int tw=0, on=0;
            if (n%3==2) {
                tw+=2; odd+=2;
            }
            if (n%3==0) {
             tw+=1; odd++;
            }
            if (m%3==1) {
             on+=1; evn++;
            }
            if (m%3==2) {
             on+=2; odd++;  evn++;
            }

            value-=(on+tw);
            value/=3;

            evn+=value;
            odd+=(2*value);
        }

        cout <<"Odd = " << odd << endl << "Even = " <<evn << endl;
    }

    return 0;
}
