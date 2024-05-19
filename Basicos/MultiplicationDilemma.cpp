// Procurar MMC

#include <bits/stdc++.h>
#define int long long int

using namespace std;

stringstream ss;

void calculo(int n)
{

    int a, b;
    cin >> a >> b;

    if (b % 10 == 0 || abs(b) <= 10)
    {
        ss << 10 * ceil(a / 10.0) << " x " << b;

        if (b * (a - 10 * ceil(a / 10.0)) < 0)
            ss << " - ";
        else
            ss << " + ";

        ss << abs(a - 10 * ceil(a / 10.0)) << " x " << abs(b) << endl;
    }
    else if (a % 10 == 0 || abs(a) <= 10)
    {
        ss << b - 10 * ceil(b / 10.0) << " x " << a;

        if (a * 10 * ceil(b / 10.0) > 0)
            ss << " + ";
        else
            ss << " - ";

        ss << abs(a) << " x " << abs(10 * ceil(b / 10.0)) << endl;
    }

    n--;
    if (n > 0)
        calculo(n);
    else
        cout << ss.str();
}

int32_t main()
{
    int n;
    cin >> n;

    calculo(n);

    return 0;
}