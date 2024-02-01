// Resolvido em 31/01/2024
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
class Solution { // BFS (Flood Fill) - Time O(n) - Space O(n)
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue <pair<TreeNode*, int>> q;
        vector <vector<int>> ans;
        vector <int> aux;
        int cur = 1;

        q.push({root, cur});

        while(!q.empty()){
            pair<TreeNode*, int> fr = q.front();
            q.pop();
            if(cur != fr.second){
                cur++;
                ans.push_back(aux);
                aux.clear();
            }

            if(!fr.first) continue;
            aux.push_back(fr.first->val);

            if(fr.first->left) q.push({fr.first->left, fr.second+1});
            if(fr.first->right) q.push({fr.first->right, fr.second+1});
        }
        if(aux.size()) ans.push_back(aux);

        return ans;
    }
};