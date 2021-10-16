#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,ans=0,c=0;
        cin>>n>>k;
        vector<int>v(k);
        for (int i = 0; i < k; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for (int i = k-1; i >=0 ; i--)
        {
            if(c<v[i])
            {
                c+=n-v[i];
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
}


 
