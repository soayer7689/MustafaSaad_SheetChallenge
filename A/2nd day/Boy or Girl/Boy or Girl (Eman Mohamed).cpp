// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int sz = mp.size();
    cout << (sz % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}