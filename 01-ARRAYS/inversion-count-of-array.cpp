/*
Inversion count of an array:
Given an array, find the total number of inversions of it. If (i < j) and (A[i] > A[j]),
then pair (i, j) is called an inversion of an array A. We need to count all such pairs in the array.

For example,

Input:  A[] = [1, 9, 6, 4, 5]

Output: The inversion count is 5

There are 5 inversions in the array: (9, 6), (9, 4), (9, 5), (6, 4), (6, 5)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ctr = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i < j && a[i] > a[j])
                ctr++;

    cout << ctr << endl;
    return 0;
}