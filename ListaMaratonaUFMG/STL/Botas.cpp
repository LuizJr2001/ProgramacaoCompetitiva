//https://olimpiada.ic.unicamp.br/pratique/p2/2017/f1/botas/
//Complexidade O(n)

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
	
	int n; cin >> n;

	vector <pii> vec (61, {0, 0});
	
	for(int i(0); i < n; ++i)
	{
		int M; cin >> M;
		char L; cin >> L;
		
		if(L == 'E')
		{
			vec[M].f++;
		}
		else if(L == 'D')
		{
			vec[M].s++;
		}

	}

	int sum(0);

	for(auto i:vec)
	{
		sum+=std::min(i.f, i.s);
	}

	cout << sum << endl;

	return 0;
}
