#include <bits/stdc++.h>
using namespace std;

int kandanesAlgorithm(int arr[], int n)
{
    int local_max = 0, global_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        local_max += arr[i];
        if (local_max < 0)
            local_max = 0;
        if (local_max > global_max)
            global_max = local_max;
    }
    return global_max;
}

int main()
{
    int array[] = {-10, 8, 4, 1, -5, -9, 5};
    int len = sizeof(array) / sizeof(array[0]);
    int res = kandanesAlgorithm(array, len);

    cout << "Kandanes Algorithm: " << res << endl;

    return 0;
}