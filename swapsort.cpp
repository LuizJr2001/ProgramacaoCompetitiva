// In this problem your goal is to sort an array consisting of n integers in at most n swaps. For the given array find the sequence of swaps that makes the array sorted in the non-descending order. Swaps are performed consecutively, one after another.

// Note that in this problem you do not have to minimize the number of swaps — your task is to find any sequence that is no longer than n.

// Input
// The first line of the input contains integer n (1 ≤ n ≤ 3000) — the number of array elements. The second line contains elements of array: a0, a1, ..., an - 1 ( - 109 ≤ ai ≤ 109), where ai is the i-th element of the array. The elements are numerated from 0 to n - 1 from left to right. Some integers may appear in the array more than once.

// Output
// In the first line print k (0 ≤ k ≤ n) — the number of swaps. Next k lines must contain the descriptions of the k swaps, one per line. Each swap should be printed as a pair of integers i, j (0 ≤ i, j ≤ n - 1), representing the swap of elements ai and aj. You can print indices in the pairs in any order. The swaps are performed in the order they appear in the output, from the first to the last. It is allowed to print i = j and swap the same pair of elements multiple times.

// If there are multiple answers, print any of them. It is guaranteed that at least one answer exists.

//Complexidade O(n^2) = 10e8

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t(0);
    cin >> n;
    int a[n], s[n], r[n][2];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n);

    for (int i = 0; i < n; ++i)
        if (a[i] != s[i])
            for (int j = i + 1; j < n; ++j)
                if (a[j] == s[i])
                {
                    swap(a[i], a[j]);
                    r[t++][0] = i, r[t - 1][1] = j;
                    break;
                }

    cout << t << endl;

    for (int i = 0; i < t; i++)
        cout << r[i][0] << " " << r[i][1] << endl;

    return 0;
}