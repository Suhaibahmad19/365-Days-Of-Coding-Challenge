#include<iostream>
#include<vector>
using namespace std;
// Definition for a Node.
class Node {
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


class Solution {
public:
    vector<int>PreOrder;
    vector<int> preorder(Node* root)
    {
        if (root == nullptr)
            return PreOrder;
        
        PreOrder.push_back(root->val);
        for (Node* child : root->children)
            preorder(child);
        
        return PreOrder;
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
    
	vector<int>PreOrder = s.preorder(root);
	for (int i = 0; i < PreOrder.size(); i++)
		cout << PreOrder[i] << " ";
	return 0;
}