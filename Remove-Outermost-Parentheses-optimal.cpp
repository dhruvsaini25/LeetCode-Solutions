class Solution {
public:
    string removeOuterParentheses(string s) {
        //optimal approach uses stack
        string result;
        stack<char> stk;
        for (char ch:s){
            if (ch=='('){
                if (!stk.empty()) result+=ch;
                stk.push(ch);
            } else {
                stk.pop();
                if (!stk.empty()) result+=ch;
            }
        }
        return result;
    }
};