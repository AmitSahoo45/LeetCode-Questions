#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid, int ans = 0)
    {
        int size = grid.size();
        vector<int> row(size, 0), col(size, 0);
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                ans += min(row[i], col[j]) - grid[i][j];
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {{3, 0, 8, 4},
                                {2, 4, 5, 7},
                                {9, 2, 6, 3},
                                {0, 3, 1, 0}};
    cout << s.maxIncreaseKeepingSkyline(grid) << endl;
    return 0;
}