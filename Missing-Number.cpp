class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //brute force
        int n=nums.size();
        for (int i=0;i<=n;i++){
            int flag=0;
            for (int j=0;j<n;j++){
                if (nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if (flag==0){
                return i;
            }
        }
        return -1;
    }
};