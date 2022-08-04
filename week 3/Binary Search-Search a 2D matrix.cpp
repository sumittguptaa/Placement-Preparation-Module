class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target==matrix[i][n-1]) return true;
            if(target>matrix[i][n-1]) continue;
            if(target<matrix[i][n-1]){
                for(int j=0;j<n-1;j++){
                    if(target==matrix[i][j])return true;
                }
                
            }
        }
        return false;
    }
};
