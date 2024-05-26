//https://codeforces.com/gym/101972/problem/A

//Complexidade O(t * n^2)

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
#define endl " \n"

stringstream ss;

vll funcao()
{
	vll vec;

	ll aux;
	cin >> aux;

	string num = to_string(abs(aux));

	for(ll i = 0; i < SZ(num); ++i)
	{
		if(num[i]!='0' && aux > 0)
			vec.push_back((num[i]-'0') * round(pow(10, SZ(num) - 1 - i)));	
		else if(num[i]!='0' && aux < 0)
			vec.push_back( - (num[i]-'0') * round(pow(10, SZ(num) - 1 - i)));	
	}

	return vec;
}

int main()
{
	ll t;
		cin >> t;

	while(t--)
	{
		vll a = funcao();
		vll b = funcao();

		for(ll i = 0; i < SZ(a); ++i)
		{
			 for(ll j = 0; j < SZ(b); ++j)
			 {
			 	if(i || j)
			 		ss << "+ ";
			 	ss << a[i] << " x " << b[j] << endl[i == SZ(a) - 1 && j == SZ(b) - 1];
			 	//(i == SZ(a) - 1 && j == SZ(b) - 1 ? endl:""); 
			 }
		}
	}
	cout << ss.str();

	return 0;
}

