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
    //Recursive
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> arr;
//         inorder(root, arr);
//         return arr;
//     }
    
//     void inorder(TreeNode *root, vector<int> &arr)
//     {
//         if(root == NULL)
//             return;
//         inorder(root->left, arr);
//         arr.push_back(root->val);
//         inorder(root->right, arr);
//     }
    
    //Iterative
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        stack<TreeNode*> nodes;
        while(root || !nodes.empty())
        {
            while(root)
            {
                nodes.push(root);
                root = root->left;
            }
            root = nodes.top();
            arr.push_back(root->val);
            nodes.pop();
            root = root->right;
        }
        return arr;
    }
};