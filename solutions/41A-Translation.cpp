#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
using namespace std;
 
int main()
{
    char w1[110],w2[110],t[110];
    cin>>w1>>w2;
    
    if (strcmp(w1,strrev(w2)))     
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    
}
