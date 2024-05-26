//https://neps.academy/br/course/introducao-a-programacao/lesson/fatorial

//Complexidade O(n) = 10e6

#include <bits/stdc++.h>
#define int long long int

using namespace std;

int fatorial(int n)
{
    if (n == 0)
        return 1;

    return n * fatorial(n - 1);
}

int32_t main()
{
    int n;
    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}