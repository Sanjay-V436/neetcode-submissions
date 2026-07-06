class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check each row
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row;

            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                if (row.find(board[i][j]) != row.end())
                    return false;

                row.insert(board[i][j]);
            }
        }

        // Check each column
        for (int j = 0; j < 9; j++) {
            unordered_set<char> col;

            for (int i = 0; i < 9; i++) {

                if (board[i][j] == '.')
                    continue;

                if (col.find(board[i][j]) != col.end())
                    return false;

                col.insert(board[i][j]);
            }
        }

        // Check each 3x3 box
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                unordered_set<char> box;

                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {

                        if (board[i][j] == '.')
                            continue;

                        if (box.find(board[i][j]) != box.end())
                            return false;

                        box.insert(board[i][j]);
                    }
                }
            }
        }

        return true;
    }
};