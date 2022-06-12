#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int l = arr.size();
        if (l == 1)
            return true;

        for (int i = 0; i < l - 1; i++)
            if (arr[i + 1] - arr[i] != arr[1] - arr[0])
            {
                return false;
                break;
            }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        int n = l.size();
        vector<bool> brr;
        for (int i = 0; i < n; i++)
        {
            vector<int> arr;
            for (int j = l[i]; j <= r[i]; j++)
                arr.push_back(nums[j]);
            if (check(arr) == true)
                brr.push_back(true);
            else
                brr.push_back(false);
        }
        return brr;
    }
};

int main()
{
    vector<int> nums = {4, 6, 5, 9, 3, 7},
                l = {0, 0, 2},
                r = {2, 3, 5};

    Solution s;
    vector<bool> vb = s.checkArithmeticSubarrays(nums, l, r);
    for (auto i : vb)
        cout << i << " ";
    return 0;
}