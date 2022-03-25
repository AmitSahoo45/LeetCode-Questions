#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string c, string s = "")
    {
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] == 'G')
                s += c[i];
            else if (c[i] == '(' && c[i + 1] == ')')
            {
                s += "o";
                i++;
            }
            else if (c[i] == '(' && c[i + 1] == 'a' && c[i + 2] == 'l' && c[i + 3] == ')')
            {
                s += "al";
                i += 3;
            }
        }
        return s;
    }
};

int main()
{

    return 0;
}