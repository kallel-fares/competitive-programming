/*
 * Codeforces 1618B - Missing Bigram
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1618/B
 * Submission: https://codeforces.com/contest/1618/submission/139238994
 * Solved: 2021-12-14 (CONTESTANT)
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



void dfs(int i,int val,vector<vector<int>>& vec, vector<int>& check)
{
    check[i]=val;
    
    for(auto x:vec[i])
    {
        if(check[x]!=val)
            dfs(x,val,vec,check);
    }
}

const int m=1e9+7;


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        
        int n;
        cin>>n;
        
        
        string ans="";
        cin>>ans;
        int v=0;
        for(int i=0;i<n-3;i++)
        {
            string aux;
            cin>>aux;
            if(ans[ans.size()-1]==aux[0])
                ans+=aux[1];
            else
            {
                v=1;
                ans+=aux;
            }
        }
        
        if(!v)
            ans+='a';
        
        cout<<ans<<"\n";
    }
    


}
