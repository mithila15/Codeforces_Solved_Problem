#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,StoF=0,FtoS=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            StoF++;
        else if(s[i]=='F' && s[i+1]=='S')
            FtoS++;
    }
    if(StoF>FtoS)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
