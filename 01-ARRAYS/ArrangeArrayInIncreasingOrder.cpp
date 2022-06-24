/*
Given an array of elements and change the array in such a way that all the elements on the array are distinct.
if you are replacing a value, then the replacing value should
be great than the previous value and after modification
sum of the elements should be as less as possible.

Example: arr[1, 2, 3, 4, 5, 5, 5] and the result should be [1, 2, 3, 4, 5, 6, 7]
example 2 [1, 2, 5, 7, 8, 8, 7] then the result should be [1, 2, 5, 7, 8, 9, 10] or 1, 2, 5, 7, 8, 10,
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> newNums;
    vector<int> ArrayInIncresingOrder(vector<int> nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
            if (nums[i] <= nums[i - 1])
            {
                nums[i] = nums[i - 1] + 1;
            }

        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 4, 3, 7, 4, 10, 0, -1, 16, 2};
    Solution s;
    vector<int> result = s.ArrayInIncresingOrder(nums);
    for (auto i : result)
        cout << i << " ";
    return 0;
}
