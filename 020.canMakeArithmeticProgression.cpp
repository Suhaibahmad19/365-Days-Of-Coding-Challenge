//https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution 
{
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        if (!arr.empty())
        {
            sort(arr.begin(), arr.end());
            int prev = 0, curr = arr[1] - arr[0];

            for (int i = 2; i < arr.size(); i++)
            {
                prev = curr;
                curr = arr[i] - arr[i - 1];
                if (prev != curr)
                    return false;
            }
            return true;
        }
        else
            return false;

    }
};
//main function created using github copilot
int main()
{
    vector<int> arr = { 3,5,1 };
	Solution s;
	if (s.canMakeArithmeticProgression(arr))
		cout << "true";
	else
		cout << "false";
    return 0;
}