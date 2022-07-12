#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sb1, sb2;
    bool PartitionToTwoEaqualSubarrays(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1)
            return false;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(6);
    nums.push_back(-4);
    nums.push_back(-3);
    nums.push_back(2);
    nums.push_back(3);
    Solution s;
    cout << s.PartitionToTwoEaqualSubarrays(nums) << endl;

    return 0;
}