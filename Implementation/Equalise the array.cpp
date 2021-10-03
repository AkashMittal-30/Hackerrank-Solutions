#include <bits/stdc++.h>
#define int long long
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int32_t main()
{
    fio;
    int n,i,freq,com,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        freq=0;
        com=a[i];
        while(i<n && com==a[i])
        {
            freq++;
            i++;
        }
        i--;
        ans=min(ans,n-freq);
    }
    cout<<ans;
    return 0;
}

    
