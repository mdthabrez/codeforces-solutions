#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,t,c=1,f=0;
    cin>>n>>t;
    vector <int> v(n);

    for (int i = 0; i < n-1; i++)
    {   
        cin>>v[i];
    }
    
    for (int i = 0; c < t; i++)
    {
        c += v[c-1];
        if(c==t)
        {
            f=1;
            cout<<"YES";
            break;
        }
    }
    if(f==0)
    {
        cout<<"NO";
    }
}


 
