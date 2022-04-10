#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int ctr = 0;
        while (num > 0)
        {
            if (num % 2 == 0)
            {
                ctr++;
                num = num / 2;
            }
            else
            {
                ctr++;
                num = num - 1;
            }
        }
        return ctr;
    }
};

int main()
{

    return 0;
}