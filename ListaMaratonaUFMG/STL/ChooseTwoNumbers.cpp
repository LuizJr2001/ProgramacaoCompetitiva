//https://codeforces.com/problemset/problem/1206/A
//Complexidade O(n³)
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
#define _ ios::sync_with_stdio(0); //cin.tie(0);
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
	vi a(n, 0);

	int m; 
	cin >> m;
	vi b(m, -2);

	for(int i(0); i < n; ++i)
	{
		cin >> a[i];
		dgb(a[i]);
	}

	for(int i(0); i < m; ++i)
	{
		cin >> b[i];
	}

	for(int i(0); i < n; ++i)
	{
		for(int j(0); j < m; ++j)
		{
			auto it = find(all(a), a[i] + b[j]);
			auto it2 = find(all(b), a[i]+b[j]);

			if(it != a.end()|| it2 != b.end())
			{
				cout << a[i] << " " << b[i] << endl;
			}
		}
	}	

	return 0;
}
