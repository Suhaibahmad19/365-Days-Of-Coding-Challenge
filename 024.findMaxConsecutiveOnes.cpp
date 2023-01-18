//https://leetcode.com/problems/max-consecutive-ones/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        
        if (!nums.empty())
        {
            if (nums.size() == 1)
                return nums[0];
            else
            {
                int count = 0, Max = 0;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] == 1)
                        count++;
                    else
                    {
                        Max = max(Max, count);
                        count = 0;
                    }
                }
                return max(Max, count);
            }
        }
        else
            return 0;
    }
};
//main function generated using github copilot
int main()
{
	Solution s;
    vector<int> nums = { 1,1,0,1,1,1,1,1 };
    int result = s.findMaxConsecutiveOnes(nums);
	cout << result << endl;

	return 0;
}
