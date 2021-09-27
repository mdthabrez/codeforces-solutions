#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,ans,mx=0,mn=0;
        cin>>x>>y;
        cin>>a>>b;

        mx=max(abs(x),abs(y));
        mn=min(abs(x),abs(y));
        if(b < 2*a)
        {
            ans=mn*b+(mx-mn)*a;
        }
        else
        {
            ans=(mn+mx)*a;
        }
        cout<<ans<<endl;
    }
}
