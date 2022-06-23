/*
Given a string that (may) be appended with a number at last. You need to find whether the length of string excluding that number is equal to that number. For example for “helloworld10”, answer is True as helloworld consist of 10 letters. Length of String is less than 10, 000.

Examples :

Input:  str = "hello5"
Output:  Yes
Explanation : As hello is of 5 length and at last number is also 5.

Input:  str = "kiituniversity15"
Output:  No
Explanation: As kiituniversity is of 14 length and at last number is 15
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    int len = str.length();
    int num = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
            len--;
        }
    }
    if (len == num)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}