#include<iostream>

using namespace std;
 int main()
 {
     int i,n,k,a[60],total=0;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
       { total++;}
    }
    cout<<total;
 }
