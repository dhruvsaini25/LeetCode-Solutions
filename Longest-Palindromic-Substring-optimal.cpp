class Solution {
public:
    int exp(string &s, int l, int r){
        //optimal approach
        int n=s.length();
        while (l>=0 && r<n && s[l]==s[r]){
            l--; r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        //without dp approach
        int n=s.length();
        int start=0, end=0;
        for (int i=0;i<n;i++){
            //odd length palindrome cheeck
            int len1=exp(s,i,i);
            //even length palindrome check
            int len2=exp(s,i,i+1);
            int len=max(len1, len2);
            if (len>end-start){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        return s.substr(start, end-start+1);
    }
};