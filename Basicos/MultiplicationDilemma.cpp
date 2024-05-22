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
#define endl '\n'
#define cout(x) cout << x << endl;

stringstream ss;

void calcular(ll n)
{
	ll a, b;
	cin >> a >> b;

	vll av;
	vll bv;

	av.clear();
	bv.clear();

	string num = to_string(a);
	for (ll i = 0; i < SZ(num); i++)
	{
		if (num[i] != '0')
			av.push_back((num[i] - '0') * round(pow(10, SZ(num) - i - 1)));
	}

	num = to_string(b);
	for (ll i = 0; i < SZ(num); i++)
	{
		if (num[i] != '0')
			bv.push_back(num[i] - '0' * round(pow(10, SZ(num) - i - 1)));
	}

	for (auto i : av)
	{
		for (auto j : bv)
		{
		}
	}
}
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;

	calcular(n);

	return 0;
}
