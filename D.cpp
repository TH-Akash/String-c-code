
#include <bits/stdc++.h>
#define ll long long
#define MAX 100100
using namespace std;
ll arr[80];
ll dp[80][80][80];
vector <pair <ll, ll> > v;
ll func(int ind, string y, int a, int xlow, int xhigh)
{
	if (ind == (a + 1) / 2 ) {
		if (xlow <= xhigh)
			return 1;
		else
			return 0;
	}

	if (dp[ind][xlow][xhigh] != -1)
		return dp[ind][xlow][xhigh];

	ll answer = 0, start;

	if (ind == 0)
		start = 1;
	else
		start = 0;

	for (int d = start; d <= 9; d++) {
		int leftmost_lo = xlow, leftmost_hi = xhigh;

		if (d < y[ind] - '0' and ind < leftmost_lo) leftmost_lo = ind;

		if (d < y[a - ind - 1 ] - '0' and (a - ind - 1) < leftmost_lo) leftmost_lo = a - ind - 1;

		if (d > y[ind] - '0' and ind < leftmost_hi) leftmost_hi = ind;

		if (d > y[a - ind - 1] - '0' and (a - ind - 1) < leftmost_hi) {
			leftmost_hi = a - ind - 1 ;
		}

		answer += func(ind + 1, y, a, leftmost_lo, leftmost_hi);
	}

	return dp[ind][xlow][xhigh] =  answer;
}

void precompute()
{
	string loc = "";
	int i = 0;

	while (i < 22) {
		memset(dp, -1, sizeof dp);
		loc = loc + "9";
		arr[i + 1] = func(0, loc, loc.length(), loc.length(), loc.length());

		i++;
	}
}

int palcheck(string k)
{
	string newk = k;
	reverse(k.begin(), k.end());
	return k == newk ? 1 : 0;
}

string n, m;

void swap1()
{
	if (n.length() > m.length())
		swap(n, m);
	else if (n.length() == m.length()) {
		if (n > m)
			swap(n, m);
	}
}



int main()
{

	ll i, j, k, t, cont, a, b;
	cin >> t;
	ll cases = t;
	precompute();

	while (t--) {
		cin >> n >> m;
		swap1();

		ll lenn = n.length() , lenm = m.length();
		memset(dp, -1, sizeof dp);
		ll ans = func(0, m, m.length(), m.length(), m.length() );


		for (i = 1; i < m.length(); i++) {
			ans += arr[i];

		}


		memset(dp, -1, sizeof dp);
		ll ans2 = func(0, n, n.length(), n.length(), n.length());

		if (ans2 != 0)
			ans2 -= palcheck(n);

		for (i = 1; i < n.length(); i++) {
			ans2 += arr[i];
		}


		int k1 = atoi(n.c_str());

		if (k1  == 0)
			ans++;

		cout << "Case " << cases - t << ": "  << ans - ans2 << endl;
	}

	return 0;
}
