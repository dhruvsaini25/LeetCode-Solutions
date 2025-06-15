class Solution {
public:
    string reverseWords(string s) {
        //optimal approach
        int n=s.length();
        int left=0;
        int right=n-1;
        while (left<=right && s[left]==' ') left++;
        while (right>=left && s[right]==' ') right--;
        string temp="";
        string ans="";
        while (left<=right){
            char ch=s[left];
            if (ch!=' '){
                temp+=ch;
            } else if (!temp.empty()){
                if (!ans.empty()) ans=temp+" "+ans;
                else ans=temp;
                temp="";
            }
            left++;
        }
        if (!temp.empty()){
            if (!ans.empty()) ans=temp+" "+ans;
            else ans=temp;
        }
        return ans;
    }
};