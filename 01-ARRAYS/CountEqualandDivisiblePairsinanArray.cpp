#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &nums, int k, int ctr = 0)
    {
        int len = nums.size();
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                if (nums[i] == nums[j] && ((i * j) % k == 0))
                    ctr++;

        return ctr;
    }
};

int main()
{

    return 0;
}