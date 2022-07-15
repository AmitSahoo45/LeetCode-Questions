#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s, int i = 0, int bop = 0, int ctr = 0)
    {
        int n = s.length();
        while (i < n)
        {
            if (s[i] == '(')
                bop++;
            else if (s[i] == ')')
            {
                if (bop > 0)
                    bop--;
                else
                    ctr++;
            }
            i++;
        }
        return ctr + bop;
    }
};

int main()
{

    return 0;
}