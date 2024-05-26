// Faça um programa para ler um inteiro N e imprima o valor de 𝑁!
// N! significa fatorial de 𝑁

// Entrada
// A entrada consiste de uma linha contendo o valor de
// 𝑁.

// Saída
// A saída consiste de uma linha contendo o valor de
// 𝑁!.

// Restrições
// 0≤𝑁≤12


// O(n) - The code uses a recursive function to calculate the factorial of a number. 
// The recursive function calls itself n times, where n is the input value. 
// Therefore, the time complexity is O(n) as the number of recursive calls is directly 
// proportional to the input value.

//https://neps.academy/br/course/introducao-a-programacao/lesson/fatorial

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