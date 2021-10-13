#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for (int k = 1; k <= t; k++)
    {
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for( char d:s)
        {
            if(d=='A')
                a++;
            else if(d=='B')
                b++;
            else if(d=='C')
                c++;
        }
        
        if(b==(a+c))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    
}


 
