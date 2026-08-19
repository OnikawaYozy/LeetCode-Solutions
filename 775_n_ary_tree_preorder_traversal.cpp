class Solution {
public:
    vector<int> output;
    void traverse(Node* root)
    {
        if(root == NULL) return;
        output.push_back(root->val);
        for(auto node:root->children) traverse(node);
    }
    vector<int> preorder(Node* root)
    {
        output.clear();
        traverse(root);
        return output;
    }
};