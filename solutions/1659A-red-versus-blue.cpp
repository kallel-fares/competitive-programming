/*
 * Codeforces 1659A - Red Versus Blue
 * Rating: 1000 | Tags: constructive algorithms, greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1659/A
 * Submission: https://codeforces.com/contest/1659/submission/153913255
 * Solved: 2022-04-17 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


const int m=1e9+7;


bool cmp(pair<int, int>a,pair<int, int>b){
    
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
    
}
 

vector<map<int, int>> dp;





int bfs1(vector<vector<int>>& vec,int u,int v)
{
    //int s=0;
//    cout<<u<<" ";
    
    
    int maxi1=0;
    
    
    for(auto x:vec[u])
    {
        if(x==v)
            continue;
        
        
        if(dp[u][x]==-1)
        {
            
            int aux=bfs1(vec, x, u);
            dp[u][x]=aux;
            
            maxi1=max(aux,maxi1);
        }
        else
        {
            maxi1=max(dp[u][x],maxi1);
        }
        
        
        
        
        
    }
    
    //cout<<u<<" "<<maxi1+maxi2+1<<"\n";
    
    
    
    return maxi1+1;
}


int main ()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    testc
    {
//        int n;
//        cin>>n;
//        vector<int> vec(n);
//        for(int i=0;i<n;i++)
//            cin>>vec[i];
        
        int n,r,b;
        cin>>n>>r>>b;
        
        
        string ans="";
        
        if(b==1)
            {
                for(int i=0;i<r/2;i++)
                    ans+='R';
                    ans+='B';
                    for(int i=0;i<r/2+r%2;i++)
                        ans+='R';
                    cout<<ans<<"\n";
                    continue;
                }
        
        
        for(int i=1;i<=r;i++)
        {
            if((r-i*2)/(b-1)+min((r-i*2)%(b-1),1)<=i)
            {
                //cout<<i<<"\n";
                
                
                for(int j=0;j<i;j++)
                {
                    ans+='R';
                }
                
                int aux=(r-i*2)/(b-1),rest=(r-i*2)%(b-1);
                
                for(int j=0;j<b-1;j++)
                {
                    ans+='B';
                    for(int k=0;k<aux;k++)
                    {
                        ans+='R';
                    }
                    if(rest)
                    {
                        ans+='R';
                        rest--;
                    }
                    
                }
                
                
                
                ans+='B';
                
                
                for(int j=0;j<i;j++)
                {
                    ans+='R';
                }
                break;
            }
            
        }
        cout<<ans<<"\n";
        
    }
    
}
