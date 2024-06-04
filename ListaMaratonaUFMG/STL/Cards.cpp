//https://codeforces.com/problemset/problem/1220/A?csrf_token=c471c109ec39d653f7682705b1d56eff
//Complexidade: O(n)
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

	int n; cin >> n;
	string str; cin >> str;

	int ones = std::count(all(str), 'n');	
	int zeros = std::count(all(str), 'z');

	vi output (ones, 1);	
	output.resize(ones + zeros, 0);
	//output.assign => substitui
	//output.insert => adiciona
	//output.insert(output.end(), all(output)); => insere numa posição especifica

	for(auto i: output)
	{
		cout << i << " ";
	}

	cout << endl;

	return 0;
}
