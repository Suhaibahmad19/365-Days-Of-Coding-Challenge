//https://leetcode.com/problems/build-array-from-permutation/description/
#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    vector<int>ans;
    vector<int> buildArray(vector<int>& nums)
    {
        if (nums.size() >= 1 && nums.size() <= 1000)
        {
            vector<int>ans;
            for (int i = 0; i < nums.size(); i++)
            {
				int n = nums[nums[i]];
				ans.push_back(n);                
            }
            return ans;
        }
        return ans;
    }
};

//main function generated using github copilot
int main()
{
	Solution s;
	vector<int>nums = { 0,2,1,5,3,4 };
	vector<int>ans;
	ans = s.buildArray(nums);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}