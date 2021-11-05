#include <iostream>

using namespace std;

int main()
{   int i,a,b,c,d=0;
    cin>>i;
    for(;i>0;i--)
    {
       cin>>a>>b>>c;
       a+b+c>=2?d++:d; 
    }
    cout<<d;
}
