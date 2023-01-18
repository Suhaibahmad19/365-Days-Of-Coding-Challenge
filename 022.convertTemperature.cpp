//https://leetcode.com/problems/convert-the-temperature/
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        return { (celsius + 273.15), ((celsius * 1.80) + 32) };
    }
};

//main function generated using github copilot
int main()
{
	Solution s;
	vector<double> result = s.convertTemperature(0);
    for (auto i : result)
        cout << i << endl;
    
    return 0;
}