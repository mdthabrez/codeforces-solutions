#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,flag=0,i;
        cin>>n;
        string v1,v2;
        cin>>v1;
        cin>>v2;
        for ( i = 0; i < n; i++)
        {
            if(v2[i]=='1' && v1[i]=='1')
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        
        
    }
}


 
