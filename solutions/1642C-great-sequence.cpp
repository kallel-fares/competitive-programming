/*
 * Codeforces 1642C - Great Sequence
 * Rating: 1200 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1642/C
 * Submission: https://codeforces.com/contest/1642/submission/147435258
 * Solved: 2022-02-23 (CONTESTANT)
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
 
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*
     
     
     */
    
    testc
    {
        
        int n,x,ans=0;
        cin>>n>>x;
        
        map<int, int > m;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec[i]=a;
            m[a]++;
        }
        
        sort(vec.begin(), vec.end(), greater<int>());
        
        
        for(int i=0;i<n;i++)
        {
            if(!m[vec[i]])
                continue;
            
            if(vec[i]%x!=0 || !m[vec[i]/x])
            {
                ans+=m[vec[i]];
                m[vec[i]]=0;
                continue;
            }
            
            int aux=min(m[vec[i]],m[vec[i]/x]);
            
            ans+=m[vec[i]]-aux;
            
            m[vec[i]]=0;
            m[vec[i]/x]-=aux;
            
            
        }
        
        cout<<ans<<"\n";
        
    }
    
}
