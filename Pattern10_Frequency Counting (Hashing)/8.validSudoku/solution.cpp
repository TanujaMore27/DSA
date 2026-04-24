class Solution {
public:
   bool operation(vector<vector<char>>& board, int mode) {
    for (int i = 0; i < 9; i++) {
        set<char> map;
        for (int j = 0; j < 9; j++) {
            char current;
            if (mode == 0) {        
                current = board[i][j];
            } else if (mode == 1) { 
                current = board[j][i];
            } else {                
                int rowStart = (i / 3) * 3;
                int colStart = (i % 3) * 3;
                current = board[rowStart + (j / 3)][colStart + (j % 3)];
            }
            
            if (!isalnum(current)) continue;
            if (map.contains(current)) return false;
            map.insert(current);
        }
    }
    return true;
}

    bool isValidSudoku(vector<vector<char>>& board) {
        bool row = operation(board,0);
        bool col = operation(board,1);
        bool rowcol = operation(board,2);
        if(row && col){
            return rowcol;
        }
        return row && col;
    }
};