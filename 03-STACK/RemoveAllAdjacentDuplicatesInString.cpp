#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        int i = 0;
        for (int j = 0; j < s.length(); j++, i++)
        {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i])
                i = i - 2;
        }
        return s.substr(0, i);
    }
};

int main()
{

    return 0;
}