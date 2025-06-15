class Solution {
public:
    string reverseWords(string s) {
        //brute force
        int n=s.length();
        stack<string>stk;
        string temp=\\;
        for (int i=0;i<n;i++){
            if (s[i]!=' '){
                temp+=s[i];
            } else if (!temp.empty()){
                stk.push(temp);
                temp=\\;
            }
        }
        string ans=\\;
        if (!temp.empty()) stk.push(temp);
        while (!stk.empty()){
            ans+=stk.top();
            stk.pop();
            if (!stk.empty()) ans+=\ \;
        }
        return ans;
    }
};