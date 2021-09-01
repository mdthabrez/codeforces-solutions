#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    
    for (int i = 1; i <= n; i++)
    {
        int sum1=0,sum2=0;
        sum1=accumulate(v.begin(),v.begin()+i,0);
        sum2=accumulate(v.begin()+i,v.end(),0);
        //cout<<sum1<<':'<<sum2<<endl;
        if(sum1>sum2)
        {
            cout<<i<<endl;
            break;
        }
    }
}
