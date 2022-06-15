#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // dp solution
    int minimumTotaldp(vector<vector<int>> &triangle, int i, int j, int n, vector<vector<int>> dp)
    {
        if (i == n - 1)
            return triangle[i][j];

        if (dp[i][j] != -1)
            return dp[i][j];

        int left = triangle[i][j] + minimumTotaldp(triangle, i + 1, j, n, dp);
        int right = triangle[i][j] + minimumTotaldp(triangle, i + 1, j + 1, n, dp);
        return dp[i][j] = min(left, right);
    }

    int minimumTotal(vector<vector<int>> &triangle, int res = 0)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return minimumTotaldp(triangle, 0, 0, n, dp);
    }
};

int main()
{

    return 0;
}