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

bool compara(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b)
{
    return a.f < b.f;
}

int main()
{
    _

    int n;
    cin >> n;

    vi vec;

    for(int i(0); i < n; ++i)
    {
        int aux;
        cin >> aux;

        vec.push_back(aux);
    }

    sort(all(vec), greater<>());

    vector<pair<int, pair<int, int>>> output;

    for(int i(1); i < n; ++i)
    {
        int dist = vec[i] - vec[i - 1];
        int dest = vec[i];
        int origin = vec [i - 1];

        output.insert(output.end(),{dist, {dest, origin}});
    }

    sort(all(output), compara);


    return 0;
}
