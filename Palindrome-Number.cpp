class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int revNum = 0;
        int n=x;
        while (x > 0) {
            int digit = x % 10;
            if (revNum > (INT_MAX - digit) / 10) return false;
            revNum = (revNum * 10) + digit;
            x /= 10;
        }
        return revNum==n;
    }
};