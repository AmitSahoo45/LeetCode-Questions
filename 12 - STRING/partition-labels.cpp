#include <bits/stdc++.h>
using namespace std;

// You are given a string s.We want to partition the string into as many parts as possible so that each letter appears in at most one part.

//     Note that the partition is done so that after concatenating all the parts in order,
//     the resultant string should be s.

//     Return a list of integers representing the size of these parts.

class Solution
{
public:
    vector<int> v;
    vector<int> partitionLabels(string s)
    {
        int n = s.length();
        vector<int> sp(26, 0);

        for (int i = 0; i < n; i++)
        {
            sp[s[i] - 'a'] = i;
            cout << "At s[i] - 'a' = " << s[i] - 'a' << " , when i is " << i << " , s[i] = " << s[i] << " we have sp[s[i] - 'a'] = " << sp[s[i] - 'a'] << endl;
        }

        cout << "---------------------------------------------------------------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << "sp[i] : " << sp[i] << ", i : " << i << "\n";
        }

        int last = 0;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            last = max(last, sp[s[i] - 'a']);
            cout << "At s[i] - 'a' = " << s[i] - 'a' << " , when i is " << i << " , s[i] = " << s[i] << " we have sp[s[i] - 'a'] = " << sp[s[i] - 'a'] << endl;
            if (i == last)
            {
                v.push_back(i - start + 1);
                start = i + 1;
            }
        }

        return v;
    }
};

int main()
{
    Solution s;
    vector<int> v = s.partitionLabels("ababcbacadefegdehijhklij");
    for (auto i : v)
        cout << i << " ";
    return 0;
}