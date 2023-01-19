//https://leetcode.com/problems/add-two-integers/description/
#include<iostream>
using namespace std;

class Solution 
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};
int main()
{
	Solution s;
    cout << s.sum(2, 3) << endl;

	return 0;
}