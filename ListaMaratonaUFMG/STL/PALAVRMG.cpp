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
	
		ss << str << ": ";

		for(int i(0); i < SZ(str); ++i)
		{
			str[i]=tolower(str[i]);
			
			if(str[i]==str[i+1])
				str[0]='0';
		}

		string sortstr(str);
		
		sort(all(str));
		
		if(str==sortstr && str[0]!=0)
			ss << "O" << endl;
		else
			ss << "N" << endl;

	}
	
	cout << ss.str();
	
	return 0;
}

