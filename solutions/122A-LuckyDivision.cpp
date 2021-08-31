#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
using namespace std;

int main()
{
    int n,f=0;
    cin>>n;
    int arr[]={4,7,47,74,447,474,477,747,774};

    for(int c:arr)
    {
        if(n%c==0)
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
