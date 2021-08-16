#include <bits/stdc++.h>
using namespace std;

const int sticks[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int stickscount(string s, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += (sticks[s[i] - '0']);
    }

    return count;
}

int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int n = s.length();
    cout << stickscount(s, n);
    return 0;
}