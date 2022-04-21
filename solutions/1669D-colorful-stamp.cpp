/*
 * Codeforces 1669D - Colorful Stamp
 * Rating: 1100 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1669/D
 * Submission: https://codeforces.com/contest/1669/submission/154347329
 * Solved: 2022-04-21 (OUT_OF_COMPETITION)
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
 



vector<ll> spec,vals;


pair<ll, ll> dfs(vector<vector<int>>& vec,int u,int v)
{
//    cout<<u<<" ";
    
    ll val=0;
    
    if(spec[u])
    {
        val=vals[u];
    }
    
    pair<ll, ll> ans;
    
    for(auto x:vec[u])
    {
        if(x==v)
            continue;
        
        pair<ll, ll> aux=dfs(vec,x,u);
        
        ans.second=max(ans.second,aux.second);
        ans.first+=aux.first;
        
    }
    
    //cout<<u<<" "<<ans.first<<" "<<ans.second<<"\n";
    
    if(ans.first)
    {
        val=vals[u];
        if(val>=ans.second)
        {
            ans.first+=val-ans.second;
            ans.second=val;
        }
            
    }
    else
    {
        ans.first=val;
        ans.second=val;
    }
        
        
    return ans;
    
}


int main ()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    testc
    {
        int n;
        cin>>n;

        string ch;
        cin>>ch;
        
        if(n==1)
        {
            if(ch[0]=='W')
                cout<<"YES\n";
            else
                cout<<"NO\n";
            continue;
        }
        
        if(n==2)
        {
            if(ch[0]==ch[1])
            {
                if(ch[0]=='W')
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            else
            {
                if(ch[0]!='W' && ch[1]!='W')
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
            continue;
               
        }
        int v=0;
        ch+='W';
        for(int i=0;i<n;i++)
        {
            int cnt=0,r=0,b=0;
            while(ch[i]!='W')
            {
                if(ch[i]=='R')
                    r++;
                else
                    b++;
                cnt++;
                i++;
            }
            if(cnt)
                i--;
            
            
            if(cnt==1)
                v=1;
            if(cnt==2 && ch[i]==ch[i-1])
                v=1;
            
            if(cnt>2 && (cnt==r || cnt==b))
                v=1;
            
        }
        
        if(v)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
    }
    
}
