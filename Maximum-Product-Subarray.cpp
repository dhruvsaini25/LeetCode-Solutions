class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //better approach 1
        int n=nums.size();
        int result=INT_MIN;
        int pre=1, suff=1;
        for (int i=0;i<n;i++){
            if (pre==0) pre=1;
            if (suff==0) suff=1;
            pre*=nums[i];
            suff*=nums[n-i-1];
            result=max(result, max(pre,suff));
        }
        return result;
    }
};