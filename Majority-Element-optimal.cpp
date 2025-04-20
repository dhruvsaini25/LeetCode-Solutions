class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            //optimal approach using MOORE VOTING ALGORITHM
            int n=nums.size();
            int element;
            int cnt;
            for (int i = 0; i < n; i++)
            {
                if (cnt==0){
                    cnt=1;
                    element=nums[i];
                } else if (nums[i]==element)
                {
                    cnt++;
                } else cnt--;
            }
            cnt=0;
            for (int i=0;i<n;i++){
                if (nums[i]==element){
                    cnt++;
                }
            }
            if (cnt>(n/2)){
                return element;
            }
            
            return -1;
        }
    };