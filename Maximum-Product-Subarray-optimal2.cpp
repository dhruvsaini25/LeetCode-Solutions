class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            //optimal approach 2
            int n=nums.size();
            int prod1=nums[0], prod2=nums[0],result=nums[0];
            for (int i=1;i<n;i++){
                int temp=max({nums[i],prod1*nums[i],prod2*nums[i]});
                prod2=min({nums[i],prod1*nums[i],prod2*nums[i]});
                prod1=temp;
                result=max(result,prod1);
            }
            return result;
        }
    };