//codeforces problem #282A
//link : https://codeforces.com/problemset/problem/282/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cases = 0;
	do
	{
		cin >> cases;
	} while ((cases < 1) && (cases > 1000));

	int X = 0;

	string* inputs = new string[cases];

	for (int i = 0; i < cases; i++)
	{
		cin >> inputs[i];
	}

	for (int i = 0; i < cases; i++)
	{
		string input = inputs[i];
		
		if (input[0] == 'x' || input[0]=='X')
		{
			if (input[1] == '+' && input[2] == '+')
				X++;

			else if (input[1] == '-' && input[2] == '-')
				X--;
		}
		else if (input[2] == 'x' || input[2] == 'X')
		{
			if (input[0] == '+' && input[1] == '+')
				X++;

			else if (input[0] == '-' && input[1] == '-')
				X--;
		}

	}
	cout << X;
	return 0;
}
