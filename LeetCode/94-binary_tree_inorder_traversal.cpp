// Resolvido 02/02/2024
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
class Solution { // DFS (Flood Fill) - Binary Tree - Time O(n) - Space O(n)
public:
    void DFS(TreeNode* root, vector<int>& ans){
        if(!root) return;
        DFS(root->left, ans);
        ans.push_back(root->val);
        DFS(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        DFS(root, ans);
        return ans;
    }
};