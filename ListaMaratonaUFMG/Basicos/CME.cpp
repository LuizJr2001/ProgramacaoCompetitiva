//https://codeforces.com/contest/1241/problem/A

//Complexidade: O(n)
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;
const ll MAX = 10e9 + 100;
const ll MIN = -MAX;
#define all(x) x.begin(), x.end()
#define SZ(x) (ll) x.size()

stringstream ss;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t; cin >> t;

	while(t--)
	{
		ll a(1), b(1), c(2), n;
		cin >> n;

		if(n % 2 == 0 && n > 4)
		{
			ss << 0 << endl;
		}
		else
		{
			if(n > 4)
				ss << 1 << '\n';
			else
				ss << 4 - n << '\n';
		}
	}

	cout << ss.str();

	return 0;
}
