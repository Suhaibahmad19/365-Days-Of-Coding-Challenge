//codeforces problem #50A
//link : https://codeforces.com/problemset/problem/50/A
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int row = 0, cols = 0;
	cin >> row >> cols;

	cout << ceil((row * cols) / 2);

	return 0;
}