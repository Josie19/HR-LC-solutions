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
    bool compare(TreeNode* p, TreeNode* q){
        if(p==nullptr&&q==nullptr)
            return true;
        if(p==nullptr||q==nullptr)
            return false;
        if(p->val!=q->val)
           return false;
        bool ltree = compare(p->left, q->left);
        bool rtree = compare(p->right, q->right);
        
        return ltree&&rtree;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p,q);
    }
};