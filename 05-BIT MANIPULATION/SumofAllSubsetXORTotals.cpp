#include <bits/stdc++.h>
using namespace std;

class Solution01
{
public:
    int sum = 0;
    void solve(vector<int> &nums, int i, int xr)
    {
        if (i == nums.size())
            sum += xr;
        else
        {
            solve(nums, i + 1, xr ^ nums[i]);
            solve(nums, i + 1, xr);
        }
    }
    int subsetXORSum(vector<int> &nums)
    {
        solve(nums, 0, 0);
        return sum;
    }
};
// Runtime: 3 ms
// Memory Usage: 7 MB

class Solution02
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        vector<int> ds;
        int ans = 0;
        func(nums, 0, ds, ans);
        return ans;
    }
    void func(vector<int> nums, int idx, vector<int> &ds, int &ans)
    {
        if (idx == nums.size())
        {

            int sans = ds[0];

            for (int i = 1; i < ds.size(); i++)
                sans = (sans ^ ds[i]);

            if (ds.empty())
                ans += 0;
            else
                ans += sans;
            return;
        }
        ds.push_back(nums[idx]);
        func(nums, idx + 1, ds, ans);
        ds.pop_back();
        func(nums, idx + 1, ds, ans);
    }
};

// Runtime: 89 ms
// Memory Usage: 32 MB

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
    }

    return 0;
}