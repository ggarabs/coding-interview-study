// Resolvido em 18/02/2024
class Solution { // DFS and Backtracking - Time O(N*M*4^L) - Space O(L)
public:
    bool search(int i, int j, int index, string word, vector<vector<char>>& board, int x_sh[], int y_sh[]){
        if(index == word.size()) return true;
        for(int k = 0; k < 4; k++){
            int new_x = i + x_sh[k], new_y = j + y_sh[k];
            if(new_x < 0 || new_y < 0 || new_x >= (int)board.size() || new_y >= (int)board[0].size()) continue;
            if(board[new_x][new_y] == word[index]){
                char letter = board[new_x][new_y];
                board[new_x][new_y] = '.';
                if(search(new_x, new_y, index+1, word, board, x_sh ,y_sh)) return true;
                board[new_x][new_y] = letter;
            }
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int lines = (int)board.size(), columns = (int)board[0].size();
        int x_sh[4] = {0, 0, -1, 1}, y_sh[4] = {1, -1, 0, 0};
        bool ans = false;
        for(int i = 0; i < lines; i++){
            for(int j = 0; j < columns; j++){
                if(board[i][j] == word[0]){
                    char letter = board[i][j];
                    board[i][j] = '.';
                    if(search(i, j, 1, word, board, x_sh, y_sh)) return true;
                    board[i][j] = letter;
                }
            }
        }
        return false;
    }
};