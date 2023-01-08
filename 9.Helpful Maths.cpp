//codeforces problem #339A
//link : https://codeforces.com/problemset/problem/339/A
#include<iostream>
#include <algorithm>
#include<string>
#include<math.h>


using namespace std;

int main()
{
	string s;

	do
	{
		cin >> s;
	} while (s.length() > 100);

	int size = ceil(s.length() / 2) + 1;

	char* nums = new char[size];

	int j = 0;
	for (int i = 0; i < s.length(); i++)//extract digits(1,2,3) from the input 
	{
		if (i % 2 == 0)
		nums[j++] = s[i];

	}
	
	sort(nums, nums + size);//sorting digits

	j = 0;
	for (int i = 0; i < s.length(); i++)//writing the digits back into string
	{
		if (i % 2 == 0)
			s[i] = nums[j++];

	}
	delete[]nums;
	nums = nullptr;
	cout << s;
}