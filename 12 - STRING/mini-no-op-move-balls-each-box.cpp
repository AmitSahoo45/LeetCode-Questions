#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> vect;
    vector<int> minOperations(string b)
    {
        int n = b.size();
        for (int i = 0; i < n; i++)
        {
            int ctr = 0;

            for (int j = i + 1; j < n; j++)
                if (b[j] == '1')
                    ctr += abs(i - j);

            for (int j = i - 1; j >= 0; j--)
                if (b[j] == '1')
                    ctr += abs(i - j);

            vect.push_back(ctr);
        }
        return vect;
    }
};

int main()
{

    return 0;
}