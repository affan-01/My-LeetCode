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
    
    void recurse(TreeNode* root)
    {
        if(root->left && root->right)
        {
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        else if(!root->left && root->right)
        {
            root->left = root->right;
            root->right = NULL;
        }
        else if(!root->right && root->left)
        {
            root->right = root->left;
            root->left = NULL ;
        }
        if(root->left)
            recurse(root->left);
        if(root->right)
            recurse(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        recurse(root);
        return root;
    }
};