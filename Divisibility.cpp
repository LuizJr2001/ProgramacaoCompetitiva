// You are given two positive integers a
//  and b
// . In one move you can increase a
//  by 1
//  (replace a
//  with a+1
// ). Your task is to find the minimum number of moves you need to do in order to make a
//  divisible by b
// . It is possible, that you have to make 0
//  moves, as a
//  is already divisible by b
// . You have to answer t
//  independent test cases.

// Input
// The first line of the input contains one integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  test cases follow.

// The only line of the test case contains two integers a
//  and b
//  (1≤a,b≤109
// ).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a
//  divisible by b
// .


// O(n)	The code consists of a loop that runs 'n' times, where 'n' is the number of test cases. 
// Inside the loop, the 'funct' function is called, which has a constant time complexity. 
// Therefore, the overall time complexity is O(n)

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