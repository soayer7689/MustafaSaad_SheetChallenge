#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    cin.tie(0);
    cin.sync_with_stdio;
    int a,b,c = 0;
    cin >>a>>b;
    bool t =true;
    while(t)
    {
        c++;
        a = a * 3;
        b = b * 2;
        if(a > b)
            t = false;
    }
    cout<<c<<endl;
}
