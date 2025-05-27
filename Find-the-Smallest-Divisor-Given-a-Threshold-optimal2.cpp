class Solution {
public:
    int findmax(vector<int> &temparr){
        int n=temparr.size();
        int maxi=INT_MIN;
        for (int i=0;i<n;i++){
            maxi=max(maxi, temparr[i]);
        }
        return maxi;
    }
    int calc(vector<int>&nums, int mid){
        int n=nums.size();
        int ans=0;
        for (int i=0;i<n;i++){
            ans +=(nums[i]+mid-1)/mid;
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold){
        int n=nums.size();
        int maxi=findmax(nums);
        int low=1;
        int high=maxi;
        int result=0;
        while (low<=high){
            int mid=low+(high-low)/2;
            if (calc(nums,mid)<=threshold){
                result=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return result;
    }
};