/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void visit(TreeNode* root, vector<int>& inorder){
        if(root==NULL)
            return;
        visit(root->left,inorder);
        inorder.push_back(root->val);
        visit(root->right,inorder);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        visit(root,inorder);
        return inorder;
    }
};