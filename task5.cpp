
/* Question-2 
Given a large integer as a string str, the task is find the number of matchsticks required to represent it. Input: str = “56” 
Output: 11 
Explanation: 5 sticks are required to represent 5 and 6 sticks are required to represent 6.
*/

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
