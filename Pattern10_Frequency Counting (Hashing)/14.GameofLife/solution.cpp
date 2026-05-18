class Solution {
public:
    int valid_sum(vector<vector<int>>& board,int r,int c){
        int row = board.size();
        int col = board[0].size();
        int sum = 0;
        int offset[8][2] = {
            {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}
        };

        for (const auto& [dr,dc] : offset){
            int nr = dr + r;
            int nc = dc + c;
            if(nr >= 0 && nr < row && nc >= 0 && nc < col) sum += board[nr][nc];
        }

        return sum;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> ans;
         for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int sum = valid_sum(board,i,j);
                ans.push_back(sum);
            }
        }
        int p = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == 0){
                    if(ans[p] == 3) board[i][j] = 1;
                }
                else{
                    if(ans[p] > 3 || ans[p] < 2) board[i][j] = 0;
                }
                p++;
            }
        }
    }
};