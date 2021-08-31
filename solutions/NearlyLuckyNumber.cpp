#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
using namespace std;
 
int main()
{
    long long int n,t;
    int f=0;
    cin>>n;
    t=n;
    while(t)
    {
        if(t%10==4 || t%10==7)
        {f++;}
        t=t/10;
    }
    if(f==4 || f==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
