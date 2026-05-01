class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(10, 0));
        vector<vector<int>> col(9, vector<int>(10, 0));
        vector<vector<int>> box(9, vector<int>(10, 0));
        for(int c=0; c<9; c++) {
            for(int r=0; r<9; r++) {
                if(board[c][r]=='.') continue;
                int num=board[c][r]-'0';
                int indexOfBox=(c/3)*3+r/3;
                if(row[r][num] || col[c][num] || box[indexOfBox][num]) return 0;
                row[r][num]=1; col[c][num]=1; box[indexOfBox][num]=1;
            }
        }
        return 1;
    }
};
