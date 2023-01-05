//codeforces problem #71A
//link : https://codeforces.com/problemset/problem/71/A
#include<iostream>
#include<string>

using namespace std;

void TooLong(string Arr[], int const& size)
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (Arr[i].size() <= 10)
				continue;
			else
			{
				int count = Arr[i].size() - 2;

				string s1 = Arr[i];
				char s2 = s1[0];
				Arr[i] = s2 + std::to_string(count) + s1[count + 1];

			}
		}
	}
	else
		return;
}
int main()
{
	int size = 0;
	cin >> size;
	string* words = new string[size];
	for (int i = 0; i < size; i++)
		cin>> words[i];

	TooLong(words, size);

	for (int i = 0; i < size; i++)
		cout << words[i] << endl;

	delete[]words;
	words = nullptr;
	return 0;
	
}