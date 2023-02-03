// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> v(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - 'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            odd++;
        }
    }
    cout << (odd & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}