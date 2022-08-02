/*  Date:- 19-07-2022*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, f[26];
    string s;

    cin >> t;
    getchar();

    while (t--)
    {

        getline(cin, s);
        n = s.size();

        for (int i = 0; i < 26; i++)
            f[i] = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                f[s[i] - 'A']++;
            if (s[i] >= 'a' && s[i] <= 'z')
                f[s[i] - 'a']++;
        }

        int flag = 0;
        for (int i = 0; i < 26; i++)
            if (f[i] == 0)
            {
                char c = i + 'a';
                cout << c;
                flag = 1;
            }

        if (flag == 0)
            cout << "~";
        cout << endl;
    }

    return 0;
}
