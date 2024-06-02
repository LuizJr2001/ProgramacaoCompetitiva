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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _ ios::sync_with_stdio(0); cin.tie(0);
#define all(x) x.begin(), x.end()
#define SZ(x) (ll) x.size()
#define f first
#define s second
#define dgb(x) cout << #x << '=' << x << '\n';
#define endl '\n'

stringstream ss;

int main()
{	_

	int n; 
	cin >> n;

	vector<pair<int, int>> vec(61, {0, 0});

	for(int i(0); i < n; ++i)
	{
		int m;
		char l;
		cin >> m >> l;

		if(l == 'D')
			vec[m].f++;
		else
			vec[m].s++;

	}

	int count(0);
	for(auto i:vec)
	{
		count+=min(i.f, i.s);
	}

	cout << count << endl;

	return 0;
}
