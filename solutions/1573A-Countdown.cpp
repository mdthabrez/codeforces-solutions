#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for (int k = 1; k <= t; k++)
    {
        int n,sum=0,p=0;
        string s;
        cin>>n>>s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]!='0')
            {
                sum += (int)s[i]-48;
                p++;
            }
        }
        if(s[n-1]!=0)
        {
            sum += (int)s[n-1]-48;
        }
        cout<<sum+p<<"\n";
    }
    
}


 
