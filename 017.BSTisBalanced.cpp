//https://leetcode.com/problems/balanced-binary-tree/
#include<iostream>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
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
    int height(TreeNode* root)
    {
        if (root == nullptr)
            return 0;

        return max(height(root->left), height(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root)
    {
        if (root == nullptr)
            return 1;

        int bf = abs(height(root->left) - height(root->right));

        if ((bf <= 1 && bf >= -1) && isBalanced(root->left) && isBalanced(root->right))
            return 1;

        return 0;
    }
};
//main function generated using gitHub copilot
int main()
{
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(3);
	root->left->left->left = new TreeNode(4);
	root->left->left->right = new TreeNode(4);

	Solution s;
	if (s.isBalanced(root))
		cout << "true";
	else
		cout << "false";
	return 0;
}