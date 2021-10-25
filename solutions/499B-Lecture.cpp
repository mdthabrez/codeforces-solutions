#include<bits/stdc++.h>
using namespace std;

int main()
{

    
       int n,m,k=0;
       cin>>n>>m;
       char a[3100][3100],b[3100][3100],c[3100][3100],ans[3100][3100];
       for (int i = 0; i < m; i++)
       {
           cin>>a[i]>>b[i];
       }
        for (int t = 0; t < n; t++)
       {
           cin>>c[t];
       }
       for (int t = 0; t < n; t++)
       {
        for (int i = 0; i < m; i++)
       {
           if(strcmp(c[t],a[i])==0 || strcmp(c[t],b[i])==0)
           {
               if(strlen(a[i])<=strlen(b[i]))
               {
                   strcpy(ans[k],a[i]);
                   k++;
                   break;
               }
               else 
               {
                   strcpy(ans[k],b[i]);
                   k++;
                   break;
               }
           }
       }
       }
       for (int i = 0; i < n; i++)
       {
           cout<<ans[i]<<" ";
       }
}
