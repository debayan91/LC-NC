class Solution {
   public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int mx = 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    dp[i][j] = 1;
                    if (i - 1 >= 0 && j - 1 >= 0 && dp[i - 1][j] > 0 && dp[i][j - 1] > 0 &&
                        dp[i - 1][j - 1] > 0) {
                        dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                    }
                    mx = max(dp[i][j], mx);
                }
            }
        }
        return mx * mx;
    }
};