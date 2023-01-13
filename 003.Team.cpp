//codeforces problem #231A
//link : https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int Teams(int const & problems)
{
	int  possibles = 0;
	bool  s1 = 0, s2 = 0, s3 = 0;
	
	
	for (int i = 0; i < problems; i++)
	{
		int check = 0;
		cin >> s1 >> s2 >> s3;

		if (s1)
			check++;
		if (s2)
			check++;
		if (s3)
			check++;

		if (check >= 2)
			possibles++;
	}

	return possibles;
}
int main()
{
	int	problems = 0;
	do
	{
		cin >> problems;
	} while ((problems < 1) && (problems > 1000));

	cout << Teams(problems);

	return 0;
}
