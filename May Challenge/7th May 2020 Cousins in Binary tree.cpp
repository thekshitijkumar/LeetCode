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
    pair<TreeNode*,int> findc(TreeNode* root,int x,int level,TreeNode* parent)
    {
        if(root==NULL)
            return {nullptr,-1};
        if(root->val==x)
            return {parent,level};
        pair<TreeNode*,int> l=findc(root->left,x,level+1,root);
        pair<TreeNode*,int> r=findc(root->right,x,level+1,root);
        if(l.first)//parent exists
            return l;
        return r;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        pair<TreeNode*,int> a=findc(root,x,1,nullptr);
        pair<TreeNode*,int> b=findc(root,y,1,nullptr);
        if(a.first!=b.first&&a.second==b.second)
            return true;
        return false;
        
    }
};
