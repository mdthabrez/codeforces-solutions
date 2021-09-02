#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
#include <set>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,m=0;
    cin>>a>>b>>c;

    m=max(a*b*c,a*(b+c));
    m=max(m,(a+b)*c);
    m=max(m,a+b+c);
    
    cout<<m<<endl;
    
    
}
