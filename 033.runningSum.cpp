//https://leetcode.com/problems/running-sum-of-1d-array/
#include<iostream>
#include<vector>

using namespace std;
class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;

    }
};
//main function generated using github copilot
int main()
{
	vector<int> nums = { 1,2,3,4 };
	Solution s;
	vector<int> res = s.runningSum(nums);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}