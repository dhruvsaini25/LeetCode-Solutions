class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //better force
        int n=nums.size();
        int cnt=0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j]; // running sum
                if (sum == k) cnt++;
            }
        }
        return cnt;
    }
};