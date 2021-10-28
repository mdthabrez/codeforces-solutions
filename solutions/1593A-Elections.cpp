#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int v[3],mx;
        cin>>v[0]>>v[1]>>v[2];
        mx=max(v[0],max(v[1],v[2]));
        if( v[0] == v[1] && v[1] == v[2])
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if (v[0]==v[1] && v[0] == mx)
        {
            cout<<1<<" "<<1<<" "<<mx-v[2]+1<<endl;
        }
        else if (v[0]==v[2] && v[0] == mx)
        {
            cout<<1<<" "<<mx-v[1]+1<<" "<<1<<endl;
        }
        else if (v[1]==v[2] && v[1] == mx)
        {
            cout<<mx-v[0]+1<<" "<<1<<" "<<1<<endl;
        }
        else
        {
        for (int i = 0; i < 3; i++)
        {
            if(v[i]==mx )
            {
                cout<<0<<" ";
            }
            else if(v[i]<mx)
            {
                cout<<mx-v[i]+1<<" ";
            }
        }
        cout<<endl;
        }
    }
}
