class Solution {
public:
    int binarysearch(vector<int>& nums, int low, int high, int target) {
        //recursive method
        int n=nums.size();
        if (low>high) return -1;
        int mid=(low+high)/2;
        if (nums[mid]==target) return mid;
        else if (target>nums[mid])
            return binarysearch(nums, mid+1, high, target);
        return binarysearch(nums, low, mid-1, target);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarysearch(nums, 0, n-1, target);
    }
};