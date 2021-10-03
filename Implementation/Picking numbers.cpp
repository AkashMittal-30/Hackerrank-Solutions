#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    vector<int> vec;
    map<int,int> mp;
    sort(a,a+n);
    int ctr=1;
    int maxi=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]==a[i])
        ctr++;
        else{
            mp[a[i-1]]=ctr;
            maxi=max(maxi,ctr);
            ctr=1;
            vec.push_back(a[i-1]);
        }
    }
    int ans=maxi;
    for(int i=0;i<n;i++)
    {
        if(vec[i-1]+1==vec[i])
        {
        ans=max(mp[vec[i-1]]+mp[vec[i]],ans);
        }
    }
    cout<<ans;
    return 0;
}
