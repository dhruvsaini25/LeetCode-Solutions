class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //optimal approach using MOORE VOTING ALGORITHM
            int n=nums.size();
            int el1=INT_MIN, el2=INT_MIN;
            int cnt1=0, cnt2=0;
            //first pass
            for (int num:nums){
                if (num==el1) cnt1++;
                else if (num==el2) cnt2++;
                else if (cnt1==0) {
                    el1=num;
                    cnt1=1;
                } else if (cnt2==0){
                    el2=num;
                    cnt2=1;
                } else{
                    cnt1--;
                    cnt2--;
                }
            }
            //second pass verify
            cnt1=0, cnt2=0;
            for (int num:nums){
                if (num==el1) cnt1++;
                else if (num==el2) cnt2++;
            }
            vector<int>result;
            if (cnt1>n/3) result.push_back(el1);
            if (cnt2>n/3) result.push_back(el2);
            return result;
    }
};