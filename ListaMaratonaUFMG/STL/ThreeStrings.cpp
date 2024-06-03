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
	
	int t; cin >> t;

	string a, b, c;
	
	int count(0);

	while(t--)
	{
		cin >> a >> b >> c;

		for(int i(0); i < SZ(a); ++i)
		{
			if(a[i]!=b[i] && b[i]==c[i])
				swap(a[i], c[i]);
			else 
				swap(b[i], c[i]);

			if(a[i]!=b[i])
				break;
		}

		if(a==b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}

