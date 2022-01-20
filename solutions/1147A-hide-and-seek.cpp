/*
 * Codeforces 1147A - Hide and Seek
 * Rating: 1500 | Tags: graphs
 * Problem:    https://codeforces.com/problemset/problem/1147/A
 * Submission: https://codeforces.com/contest/1147/submission/143409817
 * Solved: 2022-01-20 (PRACTICE)
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

 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
     
    int n,k;
    cin>>n>>k;
    
    vector<pair<int, int>> visited(n+2,{1e9,-1});
    
    int ans=(n-2)*3+4;
    
    
    for(int i=0;i<k;i++)
    {
        int a;
        cin>>a;
        
        
        visited[a].first=min(visited[a].first,i);
        
        visited[a].second=max(visited[a].second,i);
        
        
        
        
    }
    
    for(int i=1;i<=n;i++)
    {
        if(visited[i].first==1e9)
            continue;
        ans--;
        
        if(visited[i].first<visited[i+1].second)
        {
            //cout<<"adw";
            ans--;
        }
        
        
        if(visited[i].second>visited[i+1].first)
        {
            //cout<<"aaa";
            ans--;
        }
        
        
        
        
        
    }
    cout<<ans<<"\n";
    
    /*
     
     0 0 0 0 0 0
     0 1 2 3 4 5
     
     0 0 1 0 0 0
     0 1 2 3 4 5
     
     0 0 1 1 0 0
     0 1 2 3 4 5
     
     0 0 0 0 0 0
     0 1 2 3 4 5
     
     2 3 2
     
     (n-2)*3+4
     
     n=1
     
     -3+4=1
     
     n=2
     
     4
     
     1 2
     1,1 1,2 2,2 2,1
     
     
     */
}
