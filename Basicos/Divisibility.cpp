//https://codeforces.com/problemset/problem/1328/A

//Complexidade O(n)

#include <bits/stdc++.h>
#define int long long int

using namespace std;

std::stringstream ss;

void funct()
{
    int a, b;
    cin >> a >> b;

    if (a % b == 0)
        ss << 0 << endl;
    else
        ss << b * (1 + a / b) - a << endl;
}

int32_t main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        funct();
    }

    string output = ss.str();

    cout << output;

    return 0;
}