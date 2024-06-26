//https://br.spoj.com/problems/BRACELMG/
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

	int t; cin >> t;

	while(t--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		while(SZ(str1)>SZ(str2))
		{
			str2+=str2;
		}

		str2+=str2;

		auto it = str2.find(str1);	

		if(it != string::npos)
		{
			cout << "S" << endl;
		}
		else{		
			reverse(all(str2));

			it = str2.find(str1);

			if(it != string::npos)
			{
				cout << "S" << endl;
			}
			else
				cout << "N" << endl;

		}
	}

	return 0;
}
