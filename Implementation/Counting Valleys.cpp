#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')
        {
            sum-=1;
        }
        else{
        sum+=1;
        if(sum==0)
        ans++;
        }
    }
    cout<<ans;
    return 0;
}
