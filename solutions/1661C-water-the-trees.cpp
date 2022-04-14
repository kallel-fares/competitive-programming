/*
 * Codeforces 1661C - Water the Trees
 * Rating: 1700 | Tags: binary search, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1661/C
 * Submission: https://codeforces.com/contest/1661/submission/153681128
 * Solved: 2022-04-15 (PRACTICE)
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
        
    
        int n;
        cin>>n;
        
        ll maxi=0,ans=1LL<<62;
        
        //cout<<ans;
        vector<ll> vec(n);
        
    
        
        
        
        
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
            
            maxi=max(maxi,vec[i]);
        }
        
        int j=0;
        
        while(j<=2)
        {
            ll odd=0,even=0;
            for(int i=0;i<n;i++)
            {
                
                odd+=(maxi-vec[i])&1;
                even+=(maxi-vec[i])/2;
                
            }
            
    //        cout<<odd<<" "<<even<<" ";
            
            if(even-odd>1)
            {
                ll aux=abs(odd-even)/3;
                even-=aux;
                odd+=2*aux;
            }
            
            if(even-odd>1)
            {
                even--;
                odd+=2;
            }
            
            //cout<<odd<<" "<<even<<"| ";
            if(even==odd+1)
            {
                ans=min(ans,odd+even+1);
            }
            else if(even==odd)
            {
                ans=min(ans,odd+even);
            }
            else
            {
                //cout<<"hah";
                ans=min(ans,even*2+1+(odd-1-even)*2);
            }
            
            maxi++;
            j++;
            
            //cout<<ans<<" ";
        }
        
        
        
        
        cout<<ans<<"\n";
        
        
        
        
    }
        
        
        
    
    
    
    
}
