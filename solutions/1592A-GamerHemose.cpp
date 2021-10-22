#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,H,m1,m2=0,ans=0,j;
        cin>>n>>H;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        m1=v[n-1];
        m2=v[n-2];

        if(H%(m1+m2)==0)
        {
            ans=2*(H/(m1+m2));
        }
        else if (H%(m1+m2)<=m1)
        {
            ans=(2*(H/(m1+m2)))+1;
        }
        else
        {
            ans=(2*(H/(m1+m2)))+2;
        }
        cout<<ans<<endl;
        
    }
}
