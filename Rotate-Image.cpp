class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    //brute force
    vector < vector < int >> rotated(n, vector < int > (n, 0));
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                rotated[j][n-i-1]=matrix[i][j];
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                matrix[i][j]=rotated[i][j];
            }
        }
    }
};
