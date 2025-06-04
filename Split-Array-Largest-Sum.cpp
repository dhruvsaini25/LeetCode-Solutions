class Solution {
public:
    int part(vector<int>&nums,int maxsum){
        int n=nums.size();
        int part=1;
        long long subsum=0;
        for (int i=0;i<n;i++){
            if (subsum+nums[i]<=maxsum){
                subsum+=nums[i];
            } else {
                part++;
                subsum=nums[i];
            }
        }
        return part;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            int partitions=part(nums,mid);
            if (partitions>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};