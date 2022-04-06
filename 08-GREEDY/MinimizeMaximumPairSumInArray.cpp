#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPairSum(vector<int> &nums, int max = 0)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n / 2; i++)
            if ((nums[i] + nums[n - i - 1]) > max)
                max = nums[i] + nums[n - i - 1];
        return max;
    }
};

int main()
{

    return 0;
}