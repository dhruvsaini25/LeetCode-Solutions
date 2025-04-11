class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        //k>n
        k%=n;
        //reverses the whole array
        reverse(nums.begin(), nums.end());
        //reverses the first k
        reverse(nums.begin(), nums.begin()+k);
        //reverses the rest
        reverse(nums.begin()+k, nums.end());
    }
};