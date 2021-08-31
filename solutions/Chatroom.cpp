#include <iostream>
using namespace std;

int main()
{
    char h[]="hello";
    char arr[110];
    cin>>arr;
    int i =0,f=0;
    for(char c:arr)
    {
        if(c==h[i])
        {
            i++;
        }
        if(i==5)
        {
            f=1;
            break;
        }
    }
    cout<<(f==1?"YES":"NO");
    cout<<endl;

}
