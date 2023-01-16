//https://leetcode.com/problems/concatenation-of-array/
#include<iostream>
#include<vector>

using namespace std;


class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {

        int n = nums.size();
        nums.resize(2 * n);
        for (int i = 0; i < n; i++)
            nums[n + i] = nums[i];

        return nums;
    }
};
////main function created using github copilot
int main()
{
	Solution s;
	vector<int>nums = { 1,2,1 };
	
    vector<int>ans = s.getConcatenation(nums);
    
	if (!ans.empty())
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";

	return 0;
}