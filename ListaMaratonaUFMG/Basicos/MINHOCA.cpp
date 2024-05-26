//https://br.spoj.com/problems/MINHOCA/

//Complexidade O(n * m) => N <= 10^4 operações
#include <bits/stdc++.h>
#define int long long int

using namespace std;

stringstream ss;

int32_t main()
{
    int n, m, max = 0;
    cin >> n >> m;

    int matriz[n][m];

    for (size_t i = 0; i < n; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
            sum += matriz[i][j];
        }

        max = std::max(max, sum);
    }

    for (size_t j = 0; j < m; j++)
    {
        int sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += matriz[i][j];
        }

        max = std::max(max, sum);
    }

    cout << max << endl;

    return 0;
}