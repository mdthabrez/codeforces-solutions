#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    for(cin>>t;t>0;t--)
    {
        int a,b,c,th,f=0;
        cin>>a>>b>>c;
        th=a+b+c;
        int k=th/9;
        if(th%9==0 && a>=k && b>=k && c>=k)
        {
            cout<<"YES";
        }   
        else
        {
            cout<<"NO";
        }
      cout<<'\n';
    }
}
