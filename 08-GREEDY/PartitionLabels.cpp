#include <bits/stdc++.h>

using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    vector<int> v;
    vector<int> partitionLabels(string s)
    {
        int n = s.length();
        vector<int> sp(26, 0);

        for (int i = 0; i < n; i++)
            sp[s[i] - 'a'] = i;

        int last = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            last = max(last, sp[s[i] - 'a']);
            if (i == last)
            {
                v.push_back(i - start + 1);
                start = i + 1;
            }
        }

        return v;
    }
};