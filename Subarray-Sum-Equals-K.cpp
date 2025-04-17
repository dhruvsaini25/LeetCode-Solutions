class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force
        int n=nums.size();
        int cnt=0;
        for (int i=0;i<n;i++){
            int sumarr=0;
            for (int j=i;j<n;j++){
                sumarr+=nums[j];
                if (sumarr==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};