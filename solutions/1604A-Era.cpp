#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    for(cin>>t;t>0;t--)
    {
        int n,ans=0,x=0,y=0;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]>(i+y))
            {
                x=v[i]-(i+y)-1;
                ans+=x;
                y+=x;
                //cout<<y<<':'<<endl;
            }
        }
        cout<<ans<<endl;
        
        
    }
}
