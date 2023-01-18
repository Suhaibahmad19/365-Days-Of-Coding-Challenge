//https://leetcode.com/problems/consecutive-characters/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    int ConsecutiveCharacters(string s)
    {
        int count = 1, Max = 0;
        char c, prev = '\0';

        for (int i = 0; i < s.length(); i++)
        {
            c = s[i];
            if (c == prev)
                count++;
            else
            {
                count = 1;
                prev = c;
            }
            Max = max(Max, count);
        }
        return Max;
    }
};//main function generated using github copilot
int main()
{
	Solution s;
    int result = s.ConsecutiveCharacters("leetcode");
	cout << result << endl;

	return 0;
}