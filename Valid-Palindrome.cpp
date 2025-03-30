class Solution {
public:
    bool isPalindrome(int i, string& s) {
        if (i>=s.size()/2) return true;
        if (s[i]!=s[s.size()-i-1]) return false;
        return isPalindrome(i+1,s);
    }
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered.push_back(tolower(c));
            }
        }
        return isPalindrome(0, filtered);
    }
    
};