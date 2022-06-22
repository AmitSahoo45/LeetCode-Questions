#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &s)
    {
        queue<int> q;
        stack<int> st;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            q.push(students[i]);
            st.push(s[n - i - 1]);
        }
        int ans = 0;
        while (!st.empty())
        {
            if (st.top() == q.front())
            {
                st.pop();
                q.pop();
                ans++;
            }
            else
            {
                int count = 0;
                while (count < q.size() && st.top() != q.front())
                {
                    int a = q.front();
                    q.pop();
                    q.push(a);
                    count++;
                }
                if (count == q.size())
                    return n - ans;
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}