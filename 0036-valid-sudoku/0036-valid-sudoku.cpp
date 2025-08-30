class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9, 0)),
            column(9, vector<int>(9, 0));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (row[i][(int)(board[i][j] - '0') - 1] > 0) {
                        return false;
                    }
                    row[i][(int)(board[i][j] - '0') - 1]++;
                }
            }
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    if (column[i][(int)(board[j][i] - '0' - 1)] > 0) {
                        
                        return false;
                    }
                    ++column[i][(int)(board[j][i] - '0' - 1)];
                }
            }
            for (int i = 0; i < 9; i += 3) {
                for (int j = 0; j < 9; j += 3) {
                    vector<int> count(9, 0);
                    for (int k = 0; k < 3; k++) {
                        for (int l = 0; l < 3; l++) {
                            if (board[i + k][l + j] == '.')
                                continue;
                            if (count[(int)(board[i + k][l + j] - '0') - 1] >
                                0) {
                                return false;
                            }
                            count[(int)(board[i + k][j + l] - '0') - 1]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};