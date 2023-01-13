//codeforces problem #1772A
//link : https://codeforces.com/problemset/problem/1772/A

#include<iostream>
using namespace std;

int main()
{
	int cases = 0;
	do
	{	cin >> cases;	} 
	while ((cases < 1) && (cases > 1000));

	int* Sums = new int[cases];

	for (int i = 0; i < cases; i++)
	{
		int a = 0, b = 0;
		char op='\0';

		cin >> a >> op >> b;
		Sums[i] = a + b;
	}

	for (int i = 0; i < cases; i++)
	{
		cout << Sums[i] << endl;
	}

	delete Sums;
	Sums = nullptr;

	return 0;
}
