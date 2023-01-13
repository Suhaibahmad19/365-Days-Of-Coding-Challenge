//https://leetcode.com/problems/binary-tree-inorder-traversal/
//https://leetcode.com/problems/binary-tree-preorder-traversal/
//https://leetcode.com/problems/binary-tree-postorder-traversal/

#include<iostream>
#include<vector>
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
    vector<int>inOrder;
    vector<int>postOrder;
	vector<int>preOrder;
    
    vector<int> inorderTraversal(TreeNode* root)
    {
        if (root != nullptr)
        {
            inorderTraversal(root->left);
            inOrder.push_back(root->val);
            inorderTraversal(root->right);
        }
        return inOrder;

    }
    vector<int> postorderTraversal(TreeNode* root)
    {
        if (root != nullptr)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            postOrder.push_back(root->val);
        }
        return postOrder;
    }
    vector<int> preorderTraversal(TreeNode* root)
    {
        if (root != nullptr)
        {
            preOrder.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return preOrder;
    }

};
//main function generated using github copilot
int main()
{
	Solution s;
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
    
	vector<int>inOrder = s.inorderTraversal(root);
    vector<int>PreOrder = s.preorderTraversal(root);
    vector<int>PostOrder = s.postorderTraversal(root);

	if (inOrder.size() > 0)
	{
        cout << "InOrder:\t";
		for (int i = 0; i < inOrder.size(); i++)
		{
			cout << inOrder[i] << " ";
		}
	}
    if (PreOrder.size() > 0)
    {
        cout << "\nPreOrder:\t";
        for (int i = 0; i < PreOrder.size(); i++)
        {
            cout << PreOrder[i] << " ";
        }
    }
    if (PostOrder.size() > 0)
    {
        cout << "\nPostOrder:\t";
        for (int i = 0; i < PostOrder.size(); i++)
        {
            cout << PostOrder[i] << " ";
        }
    }

	
	return 0;
}