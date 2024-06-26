//https://br.spoj.com/problems/PALAVRMG/
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
		string str;
		cin >> str;
	
		bool sinal = false;

		for(int i(1); i < SZ(str); ++i)
		{
			if(tolower(str[i])>tolower(str[i-1]))
				sinal = true;
			else
			{
				sinal = false;
				break;
			}
		}
		
		if(SZ(str)==1)
			sinal = true;

		if(sinal)
			ss << str << ": " << "O" << endl;
		else
			ss << str << ": " << "N" << endl;
	}
	
	cout << ss.str();
	
	return 0;
}

