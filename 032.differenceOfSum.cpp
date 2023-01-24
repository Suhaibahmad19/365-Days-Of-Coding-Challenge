//https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    int sumOfDigit(int& n)
    {
        if (n < 10)
            return n;
        else
        {
            int sum = 0;
            while (n != 0)
            {
                int dig = n % 10;
                sum = sum + dig;
                n = n / 10;
            }
            return sum;
        }
    }
    int differenceOfSum(vector<int>& nums)
    {
        if (nums.empty())
            return 0;
    
        int sumE = 0, sumD = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sumE = sumE + nums[i];
            if (nums[i] > 9)
                sumD = sumD + sumOfDigit(nums[i]);
            else
                sumD = sumD + nums[i];
        }

        return abs(sumE - sumD);
    }
};
int main()
{
	Solution s;
	vector<int> nums = { 1,2,3,4,5,6,7,8,9,10 };
	cout << s.differenceOfSum(nums);
	return 0;
}