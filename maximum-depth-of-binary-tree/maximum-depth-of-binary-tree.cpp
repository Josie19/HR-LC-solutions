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
    void dfs (TreeNode* root, int &sum, int &ans){
    if ((root->left == NULL) && (root->right) == NULL ){
        sum ++;
        ans = max (ans,sum);
        cout << "sum_ = "<< sum <<endl;
        cout << "ans = "<< ans <<endl;
        sum --;
    }
    
    if (root->left != NULL){
        cout << "root->left = " << root->val  <<endl;
        sum ++;
        dfs(root->left,sum,ans);
        sum --;
    }
    if (root->right != NULL){
        cout << "root->right = " << root->val  <<endl;
        sum ++;
        dfs(root->right,sum,ans);
        sum --;
    }
}
int maxDepth(TreeNode* root) {
    int sum = 0;
    int ans = 0;
    if(root == NULL) return 0;
    dfs(root,sum,ans);
    return ans ;
}
};