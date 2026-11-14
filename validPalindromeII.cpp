class Solution {
public:
    bool check(string& s, int l, int r, int deleted) {
        if (l >= r) {
            return true;
        }

        if (s[l] != s[r]) {
            if (deleted == 1) {
                return false;
            }

            return check(s, l+1, r, deleted+1) ||
                   check(s, l, r-1, deleted+1);
        }

        return check(s, l+1, r-1, deleted);
    }

    bool validPalindrome(string s) {
        return check(s, 0, s.size()-1, 0);
    }
};/**
 Reminder: Use Recursion
 */
