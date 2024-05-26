///https://br.spoj.com/problems/PRIMO/

//Complexidade: O(sqrt(n))

#include <bits/stdc++.h>

using namespace std;

#define int long long int

string primo(int n)
{
    if (n == 2)
        return "sim";

    else if (n <= 1 || n % 2 == 0)
        return "nao";

    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                return "nao";
            }
        }

        return "sim";
    }
}

int32_t main()
{
    int n;
    cin >> n;

    cout << primo(n) << endl;

    return 0;
}