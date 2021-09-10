#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    int ca=a,cb=0;
    for (int i = 0; ca >= 1; i++)
    {
        ans += ca;
        cb += ca;
        ca = cb/b;
        cb = cb%b;
    }
    cout<<ans<<endl;
}
