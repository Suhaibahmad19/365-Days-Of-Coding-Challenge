//codeforces problem #4A
//link : https://codeforces.com/problemset/problem/4/A
#include<iostream>
using namespace std;

int main()
{
	int watermelon = 8;
	cin >> watermelon;

	if ((watermelon <= 2) || (watermelon > 100))
		cout << "NO";
	else
	{
		if (watermelon % 2 == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}