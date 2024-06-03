//https://codeforces.com/problemset/problem/1301/A
//Complexidade: O(t * 3 * |str|)
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
	
	int n; cin>>n;

	vector<int> vec(12, 0);

	for(int i(0); i < 12; ++i)
	{
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end(), greater<>());
	
	int count(0), k(0);

	for(auto i:vec)
	{
		if(count<n)
		{
			count+=i;
			k++;
		}
		else
			break;
	}
	
	if(count<n)
		cout << -1 << endl;
	else
		cout << k << endl;


	return 0;
}

