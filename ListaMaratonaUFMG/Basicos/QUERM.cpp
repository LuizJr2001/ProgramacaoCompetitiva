//https://br.spoj.com/problems/QUERM/

// O(n)	The code recursively calls the 'lista' function for each input number 'n', iterating through each element once. Therefore, the time complexity is O(n) where 'n' is the total number of elements in the input.
#include <bits/stdc++.h>
#define int long long int

using namespace std;

stringstream ss;

void lista(int n, int count)
{
    for (size_t i = 1; i <= n; i++)
    {
        int aux;
        cin >> aux;

        if (aux == i)
            ss << aux << endl
               << endl;
    }

    cin >> n;

    if (n != 0)
    {
        ss << "Teste " << count << endl;
        count++;
        lista(n, count);
    }
}

int32_t main()
{
    int n, count = 1;
    cin >> n;

    ss << "Teste " << count << endl;
    count++;

    lista(n, count);

    string output = ss.str();
    cout << output;

    return 0;
}