#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string num;
        cin>>num;
        int k=0,l,sum=0,ans[1000];
        l=num.length();
        for (int i = l-1; i >=0 ; i--)
        {
            if(num[i]=='0')
            {
                for (int j = i-1; j >=0 ; j--)
                {
                    if(num[j]=='0' || num[j]=='5' )
                    {
                        sum+=i-j-1+l-i-1;
                        ans[k++]=sum; 
                        sum = 0;
                    }
                                       
                }
           
          
            }
            else if (num[i]=='5')
            {
                 for (int j = i-1; j >=0 ; j--)
                {
                    if(num[j]=='2' || num[j]=='7' )
                    {
                        sum+=i-j-1+l-i-1;
                        ans[k++]=sum;
                        sum=0;
                    }
                                      
                }
            
            }
        }
        int mn=ans[0];
        //cout<<k;
        for (int m = 0; m < k; m++)
        {

            mn=min(mn,ans[m]);
        }
        
        cout <<mn<< "\n";
           
    }
}


 
