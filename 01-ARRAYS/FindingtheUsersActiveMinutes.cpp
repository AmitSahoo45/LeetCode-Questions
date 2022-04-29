#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
    {
        map<int, set<int>> mp;
        for (int i = 0; i < logs.size(); i++)
            mp[logs[i][0]].insert(logs[i][1]);

        int arr[k + 1];
        memset(arr, 0, sizeof(arr));
        for (auto it : mp)
            arr[it.second.size()]++;

        vector<int> vec;
        for (int i = 1; i <= k; i++)
            vec.emplace_back(arr[i]);

        return vec;
    }
};

int main()
{

    return 0;
}