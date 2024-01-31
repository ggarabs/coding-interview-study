// Resolvido em 30/01/2024
class Solution { // Binary Search Tree - Time O(n+m) - Space O(1)
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        const int lines = matrix.size(), columns = matrix[0].size();
        int i = 0, j = columns-1;
        bool ans = false;
        while(i < lines && j >= 0 && !ans){
            if(matrix[i][j] == target) ans = true;
            else if(target > matrix[i][j]) i++;
            else j--;
        }
        return ans;
    }
};