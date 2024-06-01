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
#define dgb(x) cout << #x << '=' << x << '\n';

stringstream ss;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int n;
	cin >> n;

	vector<pair<int, string>> shoe;

	for(int i = 0; i < n; i++)
	{
		ll m;
		string l;
		cin >> m >> l;

		shoe.push_back(make_pair(m, l));

	}
	
	for(auto i:shoe)
	{
		cout << i.second << endl;
	}	

	return 0;
}
