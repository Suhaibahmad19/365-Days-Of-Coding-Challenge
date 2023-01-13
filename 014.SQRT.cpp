//https://leetcode.com/problems/sqrtx/description/
#include<iostream>
using namespace std;

class Solution 
{
public:
    int mySqrt(int x)
    {
        if (x<0 || x>INT_MAX)
            return 0;
        else
        {
            long low = 0, high = x, result = 0;

            while (low <= high)
            {
                long mid = (low + high) / 2;

                if (mid * mid < x)
                {
                    low = mid + 1;
                    result = mid;
                }
                else if (mid * mid > x)
                    high = mid - 1;
                else 
                    return mid;//when mid*mid=x

            }

            return floor(result);


        }
    }
};

int main()
{
	Solution s;
	cout << s.mySqrt(8) << endl;
    
	return 0;
}