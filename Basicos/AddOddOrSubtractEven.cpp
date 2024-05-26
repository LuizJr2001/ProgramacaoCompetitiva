//https://codeforces.com/contest/1311/problem/A

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
#define endl "\n"

stringstream ss;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll t; cin >> t;

	while(t--){
		ll a, b, count(0);
		cin >> a >> b;

		ll c = b - a;


		if(c < 0)
		{
			if(c % 2 == 0)
				count++;
			else
				count+=2;
		}
		else if (c > 0)
		{
			if(c % 2 == 0)
				count+=2;
			else
				count++;

		}

		ss << count << '\n';
	}

	cout << ss.str();

	return 0;
}
