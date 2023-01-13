//codeforces problem #281A
//link : https://codeforces.com/problemset/problem/281/A
#include<iostream>
#include<string>

using namespace std;


int main()
{
	string s1;
	do {
		cin >> s1;
	} while (s1.size() > 1000);

	if (s1[0] >= 97 && s1[0] <= 122)
	{
		s1[0] = s1[0] - 32;
	}
	cout << s1;

	return 0;
}
