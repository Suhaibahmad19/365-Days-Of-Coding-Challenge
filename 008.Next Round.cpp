//codeforces problem #158A
//link : https://codeforces.com/problemset/problem/158/A
#include<iostream>


using namespace std;

int main()
{
	int n = 0, k = 0, kth = 0, count = 0;

	do
	{
		cin >> n >> k;
	} while (n < k);

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i + 1 == k)
			kth = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= kth && arr[i] > 0)
			count++;
	}
	delete[]arr;
	arr = nullptr;

	cout << count;

	return 0;
}
