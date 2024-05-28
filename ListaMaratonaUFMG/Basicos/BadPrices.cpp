//https://codeforces.com/contest/1213/problem/B
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
const ll MAX = (ll)1e9;
const ll MIN = -MAX;
#define all(x) x.begin(), x.end()
#define SZ(x) (ll) x.size()

stringstream ss;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;cin >> t;

	while(t--)
	{
		int n, count(0);
		cin >> n;

		vi x(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> x[i];
		}

		int min = (int)1e9;

		vi y(n);

		for (int i = n - 1; i > -1; --i)
		{
			min = std::min(min, x[i]);
			y[i] = min;
		}

		for (int i = 0; i < n - 1; ++i)
		{
			if (x[i] > y[i+1])
			{
				count++;
			}
		}

		ss << count << endl;
	}	

	cout << ss.str();

	return 0;
}
