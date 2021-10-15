#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<int>::iterator it1,it2;
    for (int k = 1; k <= t; k++)
    {
        int n,ans[1000],p=0,q=0;
        cin>>n;
        vector <int> v(n),s(n);
        //cout<<"hi";
        for (int i = 0; i < n; i++)
        {
            //cout<<"hi";
            cin>>v[i];
            s[i]=v[i];
        }
        //cout<<"hi";
        sort(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            //cout<<"hi";
            int ser=s[i],l=0,r=0,d=0;
            it1 = find (v.begin()+i, v.end(), ser);
        
            r = it1 - v.begin() + 1;
            l = i+1;
            d = r-l;
            if(r-1!=i)
            {
                //cout<<"hi";
                rotate(v.begin() + i, it1, it1+1);
            ans[q++]=l;
            ans[q++]=r;
            ans[q++]=d;
            p++;
            }

        }
        cout<<p;
        if(p!=0)
        {
        for (int m = 0; m < p*3; m++)
        {
            if(m%3==0)
            {
                cout<<endl;
            }
            cout<<ans[m]<<" ";
        }
        }
        cout<<endl;
        
    }
}
