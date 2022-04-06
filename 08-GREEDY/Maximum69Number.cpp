#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        int temp = num, ini = -1;
        for (int i = 1; temp > 0; i *= 10, temp /= 10)
        {
            if (temp % 10 == 6)
                ini = i;
        }
        if (ini == -1)
            return num;
        else
            return num + 3 * ini;
    }
};

int main()
{

    return 0;
}