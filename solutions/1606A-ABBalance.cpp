#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
for(cin>>t;t>0;t--)
{
    string s;
    cin>>s;
    int l=s.length();
    if(s[0]==s[l-1])
    {
        cout<<s;
    }
    else
    {
        s[l-1]=s[0];
        cout<<s;   
    }
    cout<<endl;

}
}

  
