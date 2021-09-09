#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  
    int t;
    for(cin>>t;t>0;t--)
    {
        int n,f=0;
        cin>>n;
        string s,str;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                cout<<i+1<<' '<<i+2<<endl;
                f=1;
                break;
            }
            else  if(s[i]=='b' && s[i+1]=='a')
            {
                cout<<i+1<<' '<<i+2<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"-1"<<' '<<"-1"<<endl;
        }
        
    }
}

