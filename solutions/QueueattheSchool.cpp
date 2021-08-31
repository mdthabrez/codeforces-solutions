#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
#include <vector> 
using namespace std;


 
int main()
{

    
        int n,k;
        cin>>n>>k;
        char arr[60];
        cin>>arr;
        for (int j = 0; j < k; j++)
        {   
            for (int i=0;i<n-1;i++)
            {
                if(arr[i]=='B' && arr[i+1]=='G')
            {
                arr[i]='G';
                arr[i+1]='B';
                i++;
            }
            }
            
            
        }
        
        cout<<arr;
    
}
