//https://leetcode.com/problems/n-ary-tree-postorder-traversal/
#include<iostream>
#include<vector>
using namespace std;
// Definition for a Node.
class Node 
{
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution 
{
public:
    vector<int>PostOrder;
    vector<int> postorder(Node* root)
    {
        if (root == nullptr)
            return PostOrder;
        for (Node* child : root->children)
            postorder(child);
        PostOrder.push_back(root->val);
        return PostOrder;
    }
};
//main function generated using github copilot
int main()
{
	Solution s;
	Node* root = new Node(1);
	root->children.push_back(new Node(3));
	root->children.push_back(new Node(2));
	root->children.push_back(new Node(4));
	root->children[0]->children.push_back(new Node(5));
	root->children[0]->children.push_back(new Node(6));
	vector<int>PostOrder = s.postorder(root);
	for (int i = 0; i < PostOrder.size(); i++)
		cout << PostOrder[i] << " ";
	return 0;
}