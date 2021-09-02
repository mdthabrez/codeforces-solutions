#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string.h>
using namespace std;
 
int main()
{
    char s[110],f=0;
    cin>>s;

    if(islower(s[0]))
    {
        for (int i = 1; i < strlen(s); i++)
        {
            if(islower(s[i]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<char(toupper(s[0]));
            for (int i = 1; i < strlen(s); i++)
            {
                cout<<char(tolower(s[i]));
            }
            cout<<endl;
        }

    }
    else 
    {
         for (int i = 1; i < strlen(s); i++)
        {
            if(islower(s[i]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<char(tolower(s[0]));
            for (int i = 1; i < strlen(s); i++)
            {
                cout<<char(tolower(s[i]));
            }
            cout<<endl;
        }
    }
    if(f==1)
    {
        cout<<s<<endl;
    }
}
