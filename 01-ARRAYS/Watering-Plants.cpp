#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int val = capacity;
        int step = 0;
        for (int i = 0; i < plants.size(); i++)
        {
            if (val < plants[i])
            {
                step += 2 * i + 1;
                val = capacity - plants[i];
            }
            else
            {
                step++;
                val -= plants[i];
            }
        }
        return step;
    }
};

int main()
{

    return 0;
}