#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,m,curr=1,i,ans=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>i;
        if(i>curr)
        {
            ans+=i-curr;
            curr=i;
        }
        else if(i<curr)
        {
            ans+=n-curr + i;
            curr=i;
        }
        
    }
    cout<<ans<<endl;
}


 
