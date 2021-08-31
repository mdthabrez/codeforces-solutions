#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    char word[110];
    cin>>word;
    int u=0,l=0;
    for(int i =0;i<strlen(word);i++)
    {
        isupper(word[i])?u++:l++;
    }
    for(int i=0;i<strlen(word);i++)
    {
        cout<<char(u>l?toupper(word[i]):tolower(word[i]));
    }
 
}
