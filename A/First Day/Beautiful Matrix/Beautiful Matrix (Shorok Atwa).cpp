// Author : Shorok Atwa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, ans;
    int arr[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    ans = abs(x - 3) + abs(y - 3);
    cout << ans;
    return 0;
}
