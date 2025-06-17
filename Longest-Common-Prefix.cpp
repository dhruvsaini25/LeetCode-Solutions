class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //brute force
        int n=strs.size();
        if (strs.empty()) return "";
        string prefix=strs[0];
        for (int i=0;i<n;i++){
            int j=0;
            while (j<prefix.size() && j<strs[i].size() && prefix[j]==strs[i][j]){
                j++;
            }
            prefix=prefix.substr(0,j);
            if (prefix=="") break;
        }
        return prefix;
    }
};