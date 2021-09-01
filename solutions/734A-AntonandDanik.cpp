#include<iostream>
using namespace std;
int main()
{
    int n,a=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(char c:s)
    {
        if(c=='A')
        {
            a++;
        }
        else if(c=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton";
    }
    else if(a<d)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
