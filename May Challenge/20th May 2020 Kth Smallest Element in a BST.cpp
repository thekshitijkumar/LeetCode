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
void inorder(TreeNode* root,vector<int> &v)
{
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<int> v;
        inorder(root,v);
        // for(int i=0;i<v.size();i++)
        //     cout<<v[i]<<" ";
        // cout<<endl;
        return v[k-1];
    }
};