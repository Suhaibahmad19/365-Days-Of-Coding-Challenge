//https://leetcode.com/problems/root-equals-sum-of-children/
#include<iostream>
using namespace std;


//Definition for a binary tree node.
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution 
{
public:
    bool checkTree(TreeNode* root)
    {
        if (root == nullptr)
            return true;
        if (root->val == ((root->left->val) + (root->right->val)))
            return true;
        else
            return false;

    }
};
//main function created using github copilot
int main()
{
	Solution s;
	TreeNode* root = new TreeNode(10);
	root->left = new TreeNode(3);
	root->right = new TreeNode(6);
    
	if (s.checkTree(root))
		cout << "true" << endl;
	else
		cout << "false" << endl;
    return 0;
}