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

		ll n, count(0);
		cin >> n;

		vll vec;
		vll aux;

		for(size_t i = 0; i < n; i++)
		{	
			ll j;
			cin >> j;

			vec.push_back(j);
			aux.push_back(j);
		}

		sort(all(aux));

		for(size_t i = 0, j = 0; i < n; i++)
		{
			if(vec[i]>aux[j])
			{
				count++;
				remove(all(aux), vec[i]);
				//auto it = find(all(aux), vec[i]);
				//if(it!=aux.end())
				//aux.erase(it);
			}
			else if(vec[i] == aux[j])
			{
				remove(all(aux), vec[i]);
				//auto it = find(all(aux), vec[i]);
				//if(it!=aux.end())
				//aux.erase(it);

			}
			else
				j++;
		}


		ss << count << '\n';
	}

	cout << ss.str();

	return 0;
}
