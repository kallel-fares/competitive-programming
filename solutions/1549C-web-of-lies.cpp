/*
 * Codeforces 1549C - Web of Lies
 * Rating: 1400 | Tags: graphs, greedy
 * Problem:    https://codeforces.com/problemset/problem/1549/C
 * Submission: https://codeforces.com/contest/1549/submission/144061049
 * Solved: 2022-01-26 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
 
 
 
const int m=1e9+7;

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    int n,m;
    cin>>n>>m;
        
    
    vector<int> fre(n+1);
    int a,b,ans=n;
    
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        
        if(a>b)
        {
            if(!fre[b])
                ans--;
            fre[b]++;
        }
        else
        {
            if(!fre[a])
                ans--;
            fre[a]++;
        }
        
            
    }
    
    
        
    
    
    int t=0;
    cin>>t;
    
    while(t--)
    {
        int q;
        cin>>q;
        
        if(q==1)
        {
            cin>>a>>b;
            
            if(a>b)
            {
                if(!fre[b])
                    ans--;
                fre[b]++;
            }
            else
            {
                if(!fre[a])
                    ans--;
                fre[a]++;
            }
            
        }
        
        if(q==2)
        {
            cin>>a>>b;
            
            if(a>b)
            {
                if(fre[b]==1)
                    ans++;
                fre[b]--;
            }
            else
            {
                if(fre[a]==1)
                    ans++;
                fre[a]--;
            }
        }
        
        if(q==3)
        {
            cout<<ans<<"\n";
        }
        
    }
        
        
        
    
        
        
     
}
