class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        int srow=0,scol=0 , erow=m-1 , ecol=n-1;
        vector<int> res;
        while(srow <= erow && scol <= ecol){
            for(int j=scol;j<=ecol;j++){
                res.push_back(matrix[srow][j]);
            }
            for(int j=srow+1;j<=erow;j++){
                res.push_back(matrix[j][ecol]);
            }
            for(int j=ecol-1;j>=scol;j--){
                if(srow == erow) break;
                res.push_back(matrix[erow][j]);
            }
            for(int j=erow-1;j>=srow+1;j--){
                if(scol == ecol) break;
                res.push_back(matrix[j][scol]);
            }
            srow++;scol++;
            erow--;ecol--;
        }
        return res;
    }
};