// Resolvido em 03/02/2024
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
class Solution { // Stack - Binary Tree - Time O(n) - Space O(n)
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> aux;
        vector<int> ans;
        TreeNode* node;

        aux.push(root);
        while(!aux.empty()){
            node = aux.top();
            if(!node) break;

            if(node->left){
                aux.push(node->left);
                node->left = NULL;
            }else{
                ans.push_back(aux.top()->val);
                aux.pop();
                if(node->right){
                    aux.push(node->right);
                    node->right = NULL;
                }
            }
        }

        return ans;
    }
};