#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfBeams(vector<string> &bank, int sum = 0, int temp = 0)
    {
        for (auto i : bank)
        {
            int ctr = count(i.begin(), i.end(), '1');
            if (ctr)
            {
                sum += temp * ctr;
                temp = ctr;
            }
        }
        return sum;
    }
};

int main()
{

    return 0;
}