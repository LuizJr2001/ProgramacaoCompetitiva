//https://codeforces.com/contest/1315/problem/A

//O(n)

#include <bits/stdc++.h>
#define int long long int

using namespace std;

stringstream ss;

void dead(int n)
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int q1 = a * y;
    int q2 = a * (b - y - 1);
    int q3 = b * x;
    int q4 = b * (a - x - 1);

    int max = std::max(q1, std::max(q2, std::max(q3,q4)));

    ss << max << endl;

    if (n > 1)
    {
        n--;
        dead(n);
    }
}

int32_t main()
{
    int n;
    cin >> n;

    dead(n);

    string output = ss.str();
    cout << output;

    return 0;
}