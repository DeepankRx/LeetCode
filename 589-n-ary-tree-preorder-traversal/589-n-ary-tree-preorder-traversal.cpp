/*
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
*/

class Solution {
    vector<int> ans;
    void preorder_(Node* root)
    {
        if(root)
        {
            ans.push_back(root->val);
            for(auto child : root->children)
            {
                preorder(child);
            }
        }
    }
public:
    vector<int> preorder(Node* root) {
        preorder_(root);
        return ans;
    }
};