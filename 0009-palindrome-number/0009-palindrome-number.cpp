class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev = x;
        int rev_ans = 0;
        while(rev){
            if(rev_ans > INT_MAX/10 || rev_ans < INT_MIN) return false;
            int rem = rev%10;
            rev_ans = rev_ans*10 + rem;
            rev = rev/10;
        }
        if(rev_ans == x) return true;
        return false;
    }
};