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
    int n;
    cin>>n;
    for (int j = n+1;; j++)
    {   
        int i=j;
        set <int,greater<int>> s1;
        vector <int> v;
        while(i)
        {
            v.push_back(i%10);
            s1.insert(i%10);
            i=i/10;
        }
        if(s1.size()==v.size())
        {
            cout<<j<<endl;
            break;
        }
    }
}
