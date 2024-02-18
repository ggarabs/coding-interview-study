// Resolvido em 28/01/2024
class Solution { // Binary Search Tree - Time O(n+m) - Space O(1)
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        const int rows = matrix.size(), columns = matrix[0].size();
        int cur_x = 0, cur_y = columns-1;
        bool ans = false;
        while(cur_x < rows && cur_y >= 0){
            if(matrix[cur_x][cur_y] == target){
                ans = true;
                break;
            }
            else if(matrix[cur_x][cur_y] > target) cur_y--;
            else cur_x++;
        }
        return ans;
    }
};