#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

 int main()
 {
     int i,l;
     char word[101];
     cin>>i;  
    
     
     for(;i>0;i--)
     {  cin>>word;
        l=strlen(word);        
        
        
        if(l>10)
        {
            cout<<word[0]<<l-2<<word[l-1]<<'\n';
        }
        else
        {
            cout<<word<<'\n';
        }
    }
    
}
