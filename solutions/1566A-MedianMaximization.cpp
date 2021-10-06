#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,h,s,ans;
        cin>>n>>s;
        if(n%2==0)
        {
            h=n/2+1;
        }
        else
        {
            h=(n+1)/2;
        }
        ans=s/h;
        cout<<ans<<endl;
    }
}
