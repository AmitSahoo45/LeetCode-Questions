#include <bits/stdc++.h>
using namespace std;
// sorting a vector diagonally
class Solution
{
public:
    int m, n;
    void sortingArrayDiagonally(vector<vector<int>> &mat, int row, int col)
    {
        vector<int> temp;
        int x = row;
        int y = col;

        while (row < m && col < n)
        {
            temp.push_back(mat[row][col]);
            ++row;
            ++col;
        }
        sort(temp.begin(), temp.end());
        int i = 0;
        while (x < m && y < n)
        {
            mat[x][y] = temp[i];
            ++x;
            ++y;
            ++i;
        }
        temp.clear();
    }

    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        m = mat.size();
        n = mat[0].size();

        for (int i = 0; i < n; i++)
        {
            sortingArrayDiagonally(mat, 0, i);
        }

        for (int i = 0; i < m; i++)
        {
            sortingArrayDiagonally(mat, i, 0);
        }
        return mat;
    }
};

int main()
{
    vector<vector<int>> mat = {{3, 3, 1, 1},
                               {2, 2, 1, 2},
                               {1, 1, 1, 2}};
    Solution s;
    s.diagonalSort(mat);

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}