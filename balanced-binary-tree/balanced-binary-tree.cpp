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
bool balanced;
    
    int height(TreeNode *root) {
        int leftHeight = 0;
        int rightHeight = 0;
       
        if (root == nullptr) return 0;
        leftHeight = height(root->left);
        rightHeight = height(root->right);
        
        int diff = abs(leftHeight-rightHeight);
        cout << leftHeight << "-" << rightHeight << "=" << diff << endl;
        if (diff > 1 && balanced) {
            balanced = false;
        }
        
        return max(leftHeight, rightHeight)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        balanced = true;
        height(root);
        return balanced;
    }
};