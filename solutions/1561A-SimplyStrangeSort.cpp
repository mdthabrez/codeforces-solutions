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
        int n;
        cin>>n;
        int arr[1010],f=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(is_sorted(arr ,arr + n))
        {
            cout<<f<<endl;
        }
        else
        {
        for (int i = 1; ; i++)
        {
            if(i%2==0)
            {
               for (int j = 1; j < n-1; j=j+2)
               {
                   if(arr[j]>arr[j+1])
                   {
                        swap(arr[j],arr[j+1]);
                   }
               }
                if(is_sorted(arr ,arr + n))
               {f=i;break;}
            }
            else
            {
                for (int j = 0; j < n-2; j=j+2)
               {
                   if(arr[j]>arr[j+1])
                   {
                        swap(arr[j],arr[j+1]);
                   }
               }
               if(is_sorted(arr ,arr + n))
               {f=i;break;}
            }
        }
        cout<<f<<endl;
        }
        
    }
}
