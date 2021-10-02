#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
using namespace std;


 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int c=0;
        for(int i=1;;i++)
        {
            if(i % 3 == 0 || i % 10 == 3)
            {}
            else{
                c++;
            }
            if(c==k)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
