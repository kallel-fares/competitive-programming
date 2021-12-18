/*
 * Codeforces 1620B - Triangles on a Rectangle
 * Rating: 1000 | Tags: geometry, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1620/B
 * Submission: https://codeforces.com/contest/1620/submission/139780383
 * Solved: 2021-12-18 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;


const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};



const int m=1e9+7;


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        ll w,h;
        cin>>w>>h;
        
        ll ans=0,mini,k;
        cin>>k;
        cin>>mini;
        for(int i=0;i<k-1;i++)
        {
            int maxi;
            cin>>maxi;
            ans=max(ans,(maxi-mini)*h);
        }
        
        cin>>k;
        cin>>mini;
        for(int i=0;i<k-1;i++)
        {
            int maxi;
            cin>>maxi;
            ans=max(ans,(maxi-mini)*h);
        }
        
        cin>>k;
        cin>>mini;
        for(int i=0;i<k-1;i++)
        {
            int maxi;
            cin>>maxi;
            ans=max(ans,(maxi-mini)*w);
        }
        
        cin>>k;
        cin>>mini;
        for(int i=0;i<k-1;i++)
        {
            int maxi;
            cin>>maxi;
            ans=max(ans,(maxi-mini)*w);
        }
        
        cout<<ans<<"\n";
        
        
        
    }
    


}
