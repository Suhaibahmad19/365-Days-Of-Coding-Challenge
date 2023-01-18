//https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/
#include<iostream>
#include<algorithm>
using namespace std;

class Solution 
{
public:
    int longestContinuousSubstring(string s)
    {
        if (s.size() != 0)
        {
            int length = 1, ans = INT_MIN;
			for (int i = 1; i < s.size(); i++)
			{
				if (s[i] == (s[i - 1] + 1))
					length++;
				else
				{
					ans = max(ans, length);
					length = 1;
				}
			}
			return max(ans, length);
        }
        return 0;
    }
};
//main function generated using github copilot
int main()
{
	Solution s;
	int result = s.longestContinuousSubstring("abcde");
	cout << result << endl;

	return 0;
}
