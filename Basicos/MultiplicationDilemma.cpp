//A. Multiplication Dilemma
//time limit per test1 second
//memory limit per test256 megabytes
//inputstandard input
//outputstandard output
//Multiplication operation is not always easy! For example, it is hard to calculate 27 × 20 using your mind, but it is easier to find the answer using the following methods: 30 × 20 - 3 × 20. It turns out that people can calculate the multiplication of two special numbers very easily.
//
//A number is called special if it contains exactly one non-zero digit at the beginning (i.e. the most significant digit), followed by a non-negative number of zeros. For example, 30, 7, 5000 are special numbers, while 0, 11, 8070 are not.
//
//In this problem, you are given two numbers a and b. Your task is to calculate the multiplication of a and b (a × b), by writing the multiplication expression as a summation or subtraction of multiplication of special numbers. Can you?
//
//Input
//The first line contains an integer T (1 ≤ T ≤ 104) specifying the number of test cases.
//
//Each test case consists of a single line containing two integers a and b ( - 109 ≤ a, b ≤ 109, a ≠ 0, b ≠ 0), as described in the problem statement above.
//
//Output
//For each test case, print a single line containing the multiplication expression of a and b as a summation or subtraction of multiplication of special numbers. All special numbers must be between  - 109 and 109 (inclusive). If there are multiple solutions, print any of them. It is guaranteed that an answer always exists for the given input.
//
//The multiplication expression must be printed in exactly one line. A single term must be printed as  in which z and w are both special numbers, # represents a single space, and x represents the multiplication operation. Two consecutive terms must be printed as  in which z and w are both special numbers, # represents a single space,  represents the multiplication operation, and  represents either the addition operation  +  or the subtraction operation  - . (Check the sample output for more clarification).
//Complexidade O(t * n^2)
//https://codeforces.com/gym/101972/problem/A

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;
const ll MAX = 10e9 + 100;
const ll MIN = -MAX;
#define all(x) x.begin(), x.end()
#define SZ(x) (ll) x.size()
#define endl " \n"

stringstream ss;

vll funcao()
{
	vll vec;

	ll aux;
	cin >> aux;

	string num = to_string(abs(aux));

	for(ll i = 0; i < SZ(num); ++i)
	{
		if(num[i]!='0' && aux > 0)
			vec.push_back((num[i]-'0') * round(pow(10, SZ(num) - 1 - i)));	
		else if(num[i]!='0' && aux < 0)
			vec.push_back( - (num[i]-'0') * round(pow(10, SZ(num) - 1 - i)));	
	}

	return vec;
}

int main()
{
	ll t;
		cin >> t;

	while(t--)
	{
		vll a = funcao();
		vll b = funcao();

		for(ll i = 0; i < SZ(a); ++i)
		{
			 for(ll j = 0; j < SZ(b); ++j)
			 {
			 	if(i || j)
			 		ss << "+ ";
			 	ss << a[i] << " x " << b[j] << endl[i == SZ(a) - 1 && j == SZ(b) - 1];
			 	//(i == SZ(a) - 1 && j == SZ(b) - 1 ? endl:""); 
			 }
		}
	}
	cout << ss.str();

	return 0;
}

