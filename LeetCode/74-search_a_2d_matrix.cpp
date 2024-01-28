// Resolvido em 28/01
class Solution { // Binary Search - Time O(log (n*m)) - Space O(1)
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int begin = 0, end = matrix.size()-1, mid, line;
        while(begin <= end){
            mid = (begin+end)/2;
            if(target >= matrix[mid][0]) begin = mid+1;
            else end = mid-1;
        }
        if(end == -1) return false;
        if(matrix[end][0] == target) return true;
        line = end, begin = 0, end = matrix[line].size()-1, mid;
        while(begin <= end){
            mid = (begin+end)/2;
            if(target > matrix[line][mid]) begin = mid+1;
            else if(target < matrix[line][mid]) end = mid-1;
            else return true;
        }
        return false;
    }
};