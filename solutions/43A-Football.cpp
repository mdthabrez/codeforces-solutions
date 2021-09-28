#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,a=0,b=0;
    cin>>t;
    t--;
    string sa,sb,sc;
    cin>>sa;
    a++;
    while(t--)
    {
        cin>>sb;
        if(sb==sa)
        {
            a++;
        }
        else
        {
            sc=sb;
            b++;
        }
    }
    cout<<(a>b?sa:sc);
    cout<<endl;
}
