class Solution {
public:
    int beautySum(string s) {
        //brute force
        int n=s.length();
        int tb=0;
        for (int i=0;i<n;i++){
            vector<int>f(26,0);
            for (int j=i;j<n;j++){
                f[s[j]-'a']++;
                int maxf=0;
                int minf=INT_MAX;
                for (int k=0;k<26;k++){
                    if (f[k]>0){
                        maxf=max(maxf,f[k]);
                        minf=min(minf,f[k]);
                    }
                }
                tb+=(maxf-minf);
            }
        }
        return tb;
    }
};