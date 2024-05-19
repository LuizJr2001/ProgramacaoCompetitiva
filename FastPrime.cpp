// 

//Complexidade O(n * sqrt(x))

#include <bits/stdc++.h>

using namespace std;

#define int long long int

stringstream ss;

string primo(int n)
{
    if (n == 2)
        return "Prime";

    else if (n <= 1 || n % 2 == 0)
        return "Not Prime";

    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                return "Not Prime";
            }
        }

        return "Prime";
    }
}

int32_t main()
{
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ss << primo(x) << endl;
    }

    string output = ss.str();
    cout << output;

    return 0;
}