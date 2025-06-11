class Solution {
public:
    bool binarysearch(vector<int>&arr, int target){
        int n=arr.size();
        int low=0, high=n-1;
        while (low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==target) return true;
            else if(target>arr[mid]) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //better approach
        int n=matrix.size();
        int m=matrix[0].size();
        for (int i=0;i<n;i++){
            bool flag=binarysearch(matrix[i], target);
            if (flag) return true;
        }
        return false;
    }
};