class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //brute force
        unordered_map<int, int> freq;
        for (int num:nums){
            freq[num]++;
        }
        for (auto& pair:freq){
            if (pair.second==1){
                return pair.first;
            }
        }
        return -1;
    }
};