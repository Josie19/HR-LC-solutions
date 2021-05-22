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
    vector<int> temp;
    void print(TreeNode* root, int level){
        if(root==NULL)
            return;
        else if(level==1){
            temp.push_back(root->val);
        }
        else{
            print(root->left,level-1);
            print(root->right,level-1);
        }
    }
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        
        return max(lh,rh)+1;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int>> pairs;
        for(int i =1; i <=h;++i){
            print(root,i);
            pairs.push_back(temp);
            temp.resize(0);
        }
        return pairs;
    }
};