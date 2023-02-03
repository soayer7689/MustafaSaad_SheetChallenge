#include<bits/stdc++.h>
using namespace std;
#define el '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio;
    int a[5][5];

    int r = 0, c = 0;
    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >>a[i][j];
            if(a[i][j] == 1)
                r = i, c = j;
        }
    }
    if(r == 2 && c == 2)
        cout<<0<<el;
    else
    {
        cout<<abs(2 - r) + abs(2 - c)<<el;
    }


}