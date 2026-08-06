class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
/*
        board[i] = row[i]
        board[][j] = column[j]
        board[3*i + a][3*j + b]
*/
        for(int r = 0; r < 9; r++){
            unordered_set<int> hash_row{};
            for(int c = 0; c < 9; c++) { // 1) Row
                if (board[r][c] != '.') {
                    if (hash_row.count(board[r][c]-'0') != 0)
                        return false;
                    hash_row.insert(board[r][c]-'0');
                }
            }
        }

        for(int c = 0; c < 9; c++){
            unordered_set<int> hash_col{};
            for(int r = 0; r < 9; r++) { // 1) Row
                if (board[r][c] != '.') {
                    if (hash_col.count(board[r][c]-'0') != 0)
                        return false;
                    hash_col.insert(board[r][c]-'0');
                }
            }
        }

        for(int x = 0; x < 9; x += 3) {
            for(int y = 0; y < 9; y += 3) {
                unordered_set<int> hash_box{};
                for(int c = 0; c < 3; c++) {
                    for(int r = 0; r < 3; r++) { // 1) Row
                        if (board[y+r][x+c] != '.') {
                            if (hash_box.count(board[y+r][x+c]-'0') != 0)
                                return false;
                            hash_box.insert(board[y+r][x+c]-'0');
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
