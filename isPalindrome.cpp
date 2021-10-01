class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string xint = to_string(x);
        int len = to_string(x).length();
        if (len % 2 == 0) {
            string half = xint.substr(0, xint.length()/2);
            string ohalf = xint.substr(xint.length()/2);
            reverse(ohalf.begin(), ohalf.end());
            return half == ohalf;
        } else { // number != even
            string half = xint.substr(0, (xint.length()-1)/2);
            string ohalf = xint.substr((xint.length()+1)/2);
            reverse(ohalf.begin(), ohalf.end());
            return half == ohalf;
        }
        return false;
    }
};
