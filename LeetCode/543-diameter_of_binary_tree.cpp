// Resolvido em 30/01/2024
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
class Solution { // Flood Fill(DFS) - Time O(n) - Space O(lg n)
public:
    int DFS(TreeNode* root, int &ans){
        if(!root) return 0;
        int left = DFS(root->left, ans), right = DFS(root->right, ans);
        ans = max(ans, left+right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        DFS(root, ans);
        return ans;
    }
};