#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio;
    int n,c = 0;
    cin >>n;
    
    for(int i =0; i < n; i++)
    {
        int t = 0,a;
        for(int j = 0; j < 3; j++)
        {
            cin >> a;
            if(a == 1)
                t += 1;
        }
        if(t > 1)
            c++;
    }
    cout<<c<<endl;
    
}