/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void dfs(TreeNode* root, TreeNode* pt , vector <TreeNode*> &v)
    {
        if(pt->val > root->val)
        {
            v.push_back(root);
            dfs(root->right,pt,v);
        }
        else if(pt->val < root->val)
        {
            v.push_back(root);
            dfs(root->left,pt,v);
        }
        else
            v.push_back(root);
        
        return;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans;
        vector <TreeNode*> v1 ;
        vector <TreeNode*> v2 ;
        dfs(root,p,v1);
        dfs(root,q,v2);
        for(int i = 0 ; i < min(v1.size(),v2.size()) ; ++i)
        {
            if(v1[i] == v2[i])
                ans = v1[i];
        }
        return ans;
    }
};