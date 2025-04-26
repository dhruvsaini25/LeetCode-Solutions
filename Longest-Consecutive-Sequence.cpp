class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //better approach
        int n=nums.size();
        if (n==0) return 0;
        sort(nums.begin(), nums.end());
        int lastsmallest=INT_MIN;
        int longest=1;
        int cnt=1;
        for (int i=0;i<n;i++){
            if (nums[i]-1==lastsmallest){
                cnt+=1;
                lastsmallest=nums[i];
            }else if (nums[i]!=lastsmallest){
                cnt=1;
                lastsmallest=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};