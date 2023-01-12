//https://leetcode.com/problems/two-sum/description/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> solution;
    vector<int> twoSum(vector<int>& nums, int target)
    {
        if (nums.size() > 0)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        solution.push_back(i);
                        solution.push_back(j);
                        return solution;
                    }
                }
            }
        }
        return solution;
    }
};
//main function generated using github copilot
int main()
{
	Solution s;
    vector<int> nums = { 2,7,11,5 };
	int target = 9;
	vector<int> solution = s.twoSum(nums, target);
    
    cout << "Target = " << target << endl;
	if (solution.size() == 2)
	{
		cout << "The indices of the two numbers that add up to the target are: " << solution[0] << " and " << solution[1] << endl;
	}
	else
	{
		cout << "No solution found" << endl;
	}
	return 0;
}