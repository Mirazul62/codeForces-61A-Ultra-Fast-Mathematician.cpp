#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    int i,j,len;
    cin>>s;
    cin>>p;




    for(i=0; i<s.length(); i++)
    {

        if((s[i]=='0' && p[i]=='0') || (s[i]=='1' && p[i]=='1'))
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }


    }

}
