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
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->left, root->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res;
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        else if(p->val == q->val)
        {
            bool res1 = isSameTree(p->left, q->right);
            bool res2 = isSameTree(p->right, q->left);
            res = res1 && res2;
            return res;
        }
        else
            return false;
    }
};