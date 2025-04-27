class Solution {
    public:
        //brute force solution
        //risk: test cases should not involve INT_MIN+1
        //as its the special charachter
        void markRow(vector<vector<int>>& matrix ,int i, int m){
            for (int j=0;j<m;j++){
                if (matrix[i][j]!=0 && matrix[i][j]!=INT_MIN+2){
                    matrix[i][j]=INT_MIN+2;
                }
            }
        }
        void markCol(vector<vector<int>>& matrix, int j, int n){
            for (int i=0;i<n;i++){
                if (matrix[i][j]!=0 && matrix[i][j]!=INT_MIN+2){
                    matrix[i][j]=INT_MIN+2;
                }
            }
        }
        void setZeroes(vector<vector<int>>& matrix) {
            int n=matrix.size();
            int m=matrix[0].size();
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    if (matrix[i][j]==0){
                        markRow(matrix,i,m);
                        markCol(matrix,j,n);
                    }
                }
            }
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    if (matrix[i][j]==INT_MIN+2){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    };