class Solution {
public:
    bool ispalindrome(string &s, int l, int r){
        //brute force
        while (l<r){
            if (s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        //without dp approach
        int n=s.size();
        int maxlen=0;
        string result="";
        for (int i=0;i<n;i++){
            for (int j=i;j<n;j++){
                if (ispalindrome(s,i,j)){
                    if (j - i + 1 > maxlen) {
                        maxlen = j - i + 1;
                        result = s.substr(i, maxlen);
                    }
                }
            }
        }
        return result;
    }
};