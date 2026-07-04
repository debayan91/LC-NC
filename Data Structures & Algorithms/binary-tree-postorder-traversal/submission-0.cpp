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
    vector<int> res;
    void p(TreeNode* r){
        if(!r) return;
        p(r->left);
        p(r->right);
        res.push_back(r->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        p(root);
        return res;
    }
};