//https://leetcode.com/problems/sum-of-square-numbers/description/
#include<iostream>
using namespace std;


class Solution {
public:
    bool judgeSquareSum(int c)
    {
        for (long a = 0; a * a <= c; a++)
        {
            double b = sqrt(c - a * a);
            if (b == (int)b)
                return 1;
        }
        return 0;
    }
};

int main()
{
	Solution s;
	if (s.judgeSquareSum(5))
		cout << "true";
	else
		cout << "false";
	return 0;
}
