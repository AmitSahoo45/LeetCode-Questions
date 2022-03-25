#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int i = 0;
        for (auto it : operations)
        {
            string s = it;
            if (s.at(1) == '+')
                i++;
            else
                i--;
        }
        return i;
    }
};

class Solution1
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int i = 0;
        for (auto s : operations)
        {
            if (s == "X++")
                i++;
            if (s == "X--")
                i--;
            if (s == "++X")
                ++i;
            if (s == "--X")
                --i;
        }
        return i;
    }
};

int main()
{

    return 0;
}