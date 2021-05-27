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

//hint: traverse both left and right subtrees simultaneously
class Solution {
public:
    bool parse(TreeNode* lst, TreeNode* rst){
        //base cases
        if(lst==nullptr&&rst==nullptr)
            return true;
        if(lst==nullptr||rst==nullptr)
            return false;
        if(lst->val!=rst->val)
            return false;
        int l = parse(lst->left,rst->right);
        int r = parse(lst->right, rst->left);
        
        return l&&r;
    }
    bool isSymmetric(TreeNode* root) {
        return parse(root,root);
    }
};