#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &s)
    {
        vector<int> num;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == "C")
                num.pop_back();
            else if (s[i] == "D")
                num.push_back(2 * num[num.size() - 1]);
            else if (s[i] == "+")
                num.push_back(num[num.size() - 1] + num[num.size() - 2]);
            else
                num.push_back(stoi(s[i]));
        }
        int sum = 0;
        for (int i = 0; i < num.size(); i++)
            sum += num[i];
        return sum;
    }
};

int main()
{

    return 0;
}