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
    
    TreeNode* preorder(vector<int> pre,int &idx,int mn,int mx)
    {
        if(idx==pre.size())
            return NULL;
        int val=pre[idx];
        if(val<mn||val>mx)
            return NULL;
        TreeNode* root=new TreeNode(val);
        idx++;
        root->left=preorder(pre,idx,mn,val-1);
        root->right=preorder(pre,idx,val,mx);
        return root;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int idx=0;
        return preorder(pre,idx,INT_MIN,INT_MAX);
        
    }
};
