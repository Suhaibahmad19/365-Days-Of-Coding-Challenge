//https://leetcode.com/problems/palindrome-number/
#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else
        {
            long int digit = 0, rev = 0, n = x;
            do
            {
                digit = x % 10;
                rev = (rev * 10) + digit;
                x = x / 10;
            } while (x != 0);

            if (n == rev)
                return true;
            else
                return false;
        }

    }
};
int main()
{
	Solution s;
    if (s.isPalindrome(121))
    {
		cout << "Palindrome";
	}
	else
	{
		cout << "Not Palindrome";
    }
	return 0;
}