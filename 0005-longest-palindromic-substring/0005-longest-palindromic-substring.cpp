class Solution{
    public:
    string findLongestPal(string str, int i, int j){
        while(i >= 0 && j < str.size() && str[i] == str[j]){
            i--;
            j++;
        }
        return str.substr(i+1, j-i-1);
    }
    
    string longestPalindrome(string s){
        if(s.length() <= 1) return s;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            string odd = findLongestPal(s, i, i);
            string even = findLongestPal(s, i, i + 1);
            if(odd.length() > ans.length()) ans = odd;
            if(even.length() > ans.length()) ans = even;
        }
        return ans;
    }
};