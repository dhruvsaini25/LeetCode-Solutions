class Solution {
public:
    int findMin(vector<int>& nums) {
        //optimal approach using BINARY SEARCH
        int n=nums.size();
        int ans=INT_MAX;
        int low=0;
        int high=n-1;
        while (low<=high){
            int mid=(low+high)/2;
            if (nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            } else {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};