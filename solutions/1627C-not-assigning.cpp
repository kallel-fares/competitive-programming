/*
 * Codeforces 1627C - Not Assigning
 * Rating: 1400 | Tags: constructive algorithms, dfs and similar, number theory, trees
 * Problem:    https://codeforces.com/problemset/problem/1627/C
 * Submission: https://codeforces.com/contest/1627/submission/142885019
 * Solved: 2022-01-15 (PRACTICE)
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
    
    
    testc
    {
        
        int n;
        cin>>n;
        
        vector<vector<int>> g(n+1);
        
        
        map<pair<int, int>, int> ans;
        
        
        vector<pair<int, int>> vec;
        
        int v=0;
        for(int i=0;i<n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            g[a].pb(b);
            g[b].pb(a);
            vec.pb(make_pair(a, b));
            
            if(g[a].size()>2 || g[b].size()>2)
                v=1;
        }
        
        
        
        if(v)
            cout<<"-1\n";
        else
        {
            int start=0;
            for(int i=0;i<n;i++)
            {
                if(g[i].size()==1)
                {
                    start=i;
                    break;
                }
                    
            }
            
            vector<int> visited(n+1);
            
            int p=0;
            while(!visited[start])
            {
                //cout<<start<<" ";
                visited[start]=1;
                
                if(!visited[g[start][0]])
                {
                    if(p&1)
                    {
                        ans[make_pair(start, g[start][0])]=2;
                        
                            ans[make_pair(g[start][0], start )]=2;
                    }
                    else
                    {
                        
                            ans[make_pair(start, g[start][0])]=3;
                        
                            ans[make_pair(g[start][0], start)]=3;
                    }
                    
                    p=(p+1)%2;
                    
                    start=g[start][0];
                        
                }
                else if (g[start].size()>1)
                {
                    //cout<<start<<" "<<g[start][1];
                    if(p&1)
                    {
                        ans[make_pair(start, g[start][1])]=2;
                        ans[make_pair(g[start][1], start )]=2;
                    }
                    else
                    {
                        ans[make_pair(start, g[start][1])]=3;
                        ans[make_pair(g[start][1], start)]=3;
                    }
                        
                    
                    p=(p+1)%2;
                    
                    start=g[start][1];
                }
                
            }
            
            
            for(auto x:vec)
            {
                cout<<ans[make_pair(x.first, x.second)]<<" ";
            }
            cout<<"\n";
            
            
        }
        
        
    }
    
}
