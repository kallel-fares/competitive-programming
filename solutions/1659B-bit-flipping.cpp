/*
 * Codeforces 1659B - Bit Flipping
 * Rating: 1300 | Tags: bitmasks, constructive algorithms, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1659/B
 * Submission: https://codeforces.com/contest/1659/submission/153932862
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
        int n,k;
        cin>>n>>k;
        string ch;
        cin>>ch;
        
        vector<int> vec(n);
        
        
        if(n==1)
        {
            cout<<ch<<"\n";
            cout<<k<<"\n";
            continue;
        }
        
        int rev=0,st=0;
        
        if(k&1)
        {
            int v=0;
            rev=1;
            
            for( st=0;st<n;st++)
            {
                if(ch[st]=='1')
                {
                    vec[st]++;
                    v=1;
                    break;
                }
                else
                {
                    if(st!=n-1)
                        ch[st]='1';
                    
                }
                
            }
            
            if(!v)
            {
                vec[n-1]++;
                
            }
            
            k--;
            
            st++;
        }
        
        stack<int> sta;
        for(int i=st;i<n;i++)
        {
            if(!k)
            {
                if(rev)
                {
                    if(ch[i]=='1')
                        ch[i]='0';
                    else
                        ch[i]='1';
                }
                    
                continue;
            }
            
            if(ch[i]=='1' && !rev)
                continue;
               
            if(ch[i]=='0' && rev)
            {
                ch[i]='1';
                continue;
            }
            
            if(sta.size()==1)
            {
                ch[i]='1';
                ch[sta.top()]='1';
                vec[i]++;
                vec[sta.top()]++;
                sta.pop();
                k-=2;
            }
            else
            {
                sta.push(i);
            }
            
        }
        
        if(k && sta.size())
        {
            ch[sta.top()]='1';
            ch[n-1]='0';
            vec[sta.top()]++;
            vec[n-1]++;
            k-=2;
        }
        
        vec[n-1]+=k;
        
        
        
        
        
        cout<<ch<<"\n";
        for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
        cout<<"\n";
    }
    
}
