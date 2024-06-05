//https://codeforces.com/contest/1351/problem/C
//Complexidade O(n)
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>

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

int main()
{ 
	_
		int t; cin >> t;

	while(t--)
	{
		string str; cin >> str;

		std::set<pair<pii, pii>> map;

		int x(0), y(0), num(0);

		for(auto i:str)
		{
			pii atual = {x, y};

			if(i == 'N')
			{
				y++;
			}
			else if(i == 'S')
			{
				y--;
			}
			else if(i=='W')
			{
				x--;
			}
			else if(i=='E')
			{
				x++;
			}

			pii prox = {x, y};

			if(map.count(make_pair(atual, prox)))
			{
				num++;
			}
			else 
			{
				num+=5;
			}

			map.insert({atual, prox});
			map.insert({prox, atual});

		}

		cout << num << endl;
	}
	return 0;
}
