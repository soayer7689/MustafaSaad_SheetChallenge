// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int FriendsNum, FenceHeight, height, sum = 0;
    cin >> FriendsNum >> FenceHeight;
    // take friends height to check if smaller than or equal to fence height
    while (FriendsNum--)
    {
        cin >> height;
        if (height <= FenceHeight)
            // if friends height to check if smaller than or equal to fence
            // width equal 1
            sum += 1;
        //  if friends height to check if greater than to fence
        // width equal 2
        else
            sum += 2;
    }
    // print the minimum width
    cout << sum;
    return 0;
}
