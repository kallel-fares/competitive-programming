/*
 * Codeforces 1569B - Chess Tournament
 * Rating: 1000 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1569/B
 * Submission: https://codeforces.com/contest/1569/submission/136110005
 * Solved: 2021-11-18 (VIRTUAL)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc{
        
        int n;
        cin>>n;
        
        string ch;
        cin>>ch;
        
        
        vector<vector<char>> ans;
        for(int i=0;i<n;i++)
        {
            vector<char> aux(n,'X');
            ans.pb(aux);
        }
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='1')
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                        continue;
                    ans[i][j]=ans[j][i]='=';
                }
            }
        }
        int a=0;
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='2')
            {
                int v=0;
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                        continue;
                    if(ans[i][j]=='X' && ans[j][i]=='X')
                    {
                        ans[i][j]='+';
                        ans[j][i]='-';
                        v=1;
                        break;
                    }
                }
                if(v==0)
                    a=1;
            }
        }
        
        
        if(a)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            
            for(int i=0;i<n;i++)
            {
                
                    for(int j=0;j<n;j++)
                    {
                        if(i==j)
                            continue;
                        if(ans[i][j]=='X')
                            ans[i][j]=ans[j][i]='=';
                        
                    }
                
            }
            
            for(auto x:ans)
            {
                for(auto y:x)
                {
                    cout<<y;
                }
                cout<<"\n";
                
            }
        }
        
        
    }
    
    
    
}
