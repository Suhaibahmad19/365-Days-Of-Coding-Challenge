//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
#include<iostream>
using namespace std;

class Solution 
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, product = 1;
        if (n < 0)
            n *= -1;

        while (n != 0)
        {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return product - sum;

    }
};
int main()
{
    int n = 234;
	Solution s;
	cout << s.subtractProductAndSum(n) << endl;
	return 0;
}