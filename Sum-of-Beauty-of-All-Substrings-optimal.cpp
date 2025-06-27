class Solution {
public:
    int beautySum(string s) {
        //optimal approach
        int n=s.size();
        int tb=0;
        for (int i=0;i<n;i++){
            map<char,int>m;
            for (int j=i;j<n;j++){
                m[s[j]]++;
                int maxf=INT_MIN;
                int minf=INT_MAX;
                for (auto &[ch,cnt]:m){
                    maxf=max(maxf,cnt);
                    minf=min(minf,cnt);
                }
                tb+=(maxf-minf);
            }
        }
        return tb;
    }
};