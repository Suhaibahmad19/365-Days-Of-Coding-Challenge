//https://leetcode.com/problems/valid-perfect-square/description/
#include<iostream>
using namespace std;

class Solution 
{
public:
    bool isPerfectSquare(int num)
    {
        for (long long int i = 0; i <= num; i++)
        {
            if (i * i == num)
                return true;
        }
        return false;
    }
};

int main()
{
	Solution s;
	if (s.isPerfectSquare(16))
		cout << "true";
	else
		cout << "false";
    return 0;
}