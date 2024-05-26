// Tarefa
// Dado um inteiro N, verifique se N é primo.

// Entrada
// A entrada é composta por um único caso de teste, composto por uma única linha que contém o inteiro N.

// Saída
// Seu programa deve produzir uma única linha, contendo a palavra "sim", se N for primo, e "nao", caso contrário (note a ausência de acentuação).
//https://br.spoj.com/problems/PRIMO/

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