//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include<iostream>
#include<vector>
using namespace std;


class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size() - 1, a = -1, b = -1;
        while(start<= end) 
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
                a = mid, end = mid - 1;
            else nums[mid] < target ? start = mid + 1 : end = mid - 1;
        }

        start = 0, end = nums.size() - 1;
        while(start<= end) 
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
                b = mid, start = mid + 1;
            else nums[mid] < target ? start = mid + 1 : end = mid - 1;
        }
        vector<int>ans = { a,b };
        return ans;
    }
};

//main function created using github copilot
int main()
{
	Solution s;
	vector<int>nums = { 5,7,7,8,8,10 };
	int target = 8;
    
	vector<int>ans = s.searchRange(nums, target);
	if(!ans.empty())
        for (int i = 0; i < ans.size(); i++)
	    	cout << ans[i] << " ";

    return 0;
}