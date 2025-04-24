class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            //optimal approach
            int n=nums.size();
            int posindex=0, negindex=1;
            vector<int> answer(n);
            for (int i = 0; i < n; i++){
                if (nums[i]<0){
                    answer[negindex]=nums[i];
                    negindex+=2;
                } else{
                    answer[posindex]=nums[i];
                    posindex+=2;
                }
            }
            return answer;
        }
    };