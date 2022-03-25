#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> v;
    int checkIfExceeds(int n, vector<int> sp, string str, int strl, int ctr = 0)
    {
        for (int i = 0; i < strl; i++)
        {
            if (str[i] == 'R')
                sp[1]++;
            else if (str[i] == 'L')
                sp[1]--;
            else if (str[i] == 'U')
                sp[0]--;
            else if (str[i] == 'D')
                sp[0]++;

            cout << sp[0] << "," << sp[1] << " | ";

            if ((sp[0] > n - 1) || (sp[1] > n - 1))
                return i;
            else if ((sp[0] < 0) || (sp[1] < 0))
                return i;
        }
        cout << endl;
        return strl;
    }

    vector<int> executeInstructions(int n, vector<int> &sp, string s)
    {
        int num = s.length();

        for (int i = 0; i < num; i++)
        {
            string str = s.substr(i, num);
            cout << i << " : ";
            int val = checkIfExceeds(n, sp, str, str.length());
            cout << "-----------------------------------------------------" << endl;
            v.push_back(val);
        }

        return v;
    }
};

int main()
{
    Solution s;
    vector<int> sp = {0, 1};
    vector<int> newvec = s.executeInstructions(3, sp, "RRDDLU");

    for (auto i : newvec)
        cout << i << " ";

    return 0;
}

class Solution1
{
public:
    vector<int> res;
    vector<int> executeInstructions(int n, vector<int> &st, string s)
    {
        
    }
};