#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int x;
        if (ruleKey == "type")
            x = 0;
        else if (ruleKey == "color")
            x = 1;
        else if (ruleKey == "name")
            x = 2;
        else
            x = -1;
        int count = 0, i, j;
        if (x != -1)
        {
            for (i = 0; i < items.size(); i++)
            {
                if (items[i][x] == ruleValue)
                    count++;
            }
        }

        return count;
    }
};

int main()
{

    return 0;
}