// https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int ans=matrix.size();
        for(int i=0;i<ans;i++){
            for(int j=0;j<ans;j++){
                if(i<j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        for(int i=0;i<ans;i++){
            for(int j=0;j<ans/2;j++){
                    swap(matrix[i][j],matrix[i][ans-1-j]);
            }
        }
    }
};
