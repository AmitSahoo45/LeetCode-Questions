#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
            return false;
        sum /= 2;
        int n = nums.size();
        int dp[n + 1][sum + 1];
        memset(dp, 0, sizeof dp);
        for (int i = 1; i < n + 1; ++i)
            for (int j = 1; j < sum + 1; j++)
            {
                dp[i][0] = true;
                dp[0][j] = false;
            }

        for (int i = 1; i < n + 1; i++)
            for (int j = 1; j < sum + 1; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j >= nums[i - 1])
                    dp[i][j] = (dp[i][j] || dp[i - 1][j - nums[i - 1]]);
            }

        return dp[n][sum];
    }
};

int main()
{

    return 0;
}