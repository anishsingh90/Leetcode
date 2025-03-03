class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        
        // dp[i][j] represents if s[0...i-1] matches p[0...j-1]
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Empty pattern matches empty string
        dp[0][0] = true;
        
        // Handle patterns starting with '*'
        for(int j = 1; j <= n; j++) {
            if(p[j-1] == '*') {
                dp[0][j] = dp[0][j-1];
            }
        }
        
        // Fill the dp table
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(p[j-1] == '?' || s[i-1] == p[j-1]) {
                    // Current characters match or '?' can match any char
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1] == '*') {
                    // '*' can match empty sequence OR any sequence
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};