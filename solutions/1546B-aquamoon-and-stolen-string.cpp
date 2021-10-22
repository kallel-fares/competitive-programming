/*
 * Codeforces 1546B - AquaMoon and Stolen String
 * Rating: 1200 | Tags: interactive, math
 * Problem:    https://codeforces.com/problemset/problem/1546/B
 * Submission: https://codeforces.com/contest/1546/submission/132729465
 * Solved: 2021-10-22 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
 
const int N=3e5+5;
 

 
int main ()
{
    testc
	{ 
        int n,m;
        cin>>n>>m;
        vector<map<int,int>> freq(m);
        
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            for(int j=0;j<m;j++)
            {
                freq[j][ch[j]-'a']++;
            }
            
        }
        
        for(int i=0;i<n-1;i++)
        {
            string ch;
            cin>>ch;
            for(int j=0;j<m;j++)
            {
                freq[j][ch[j]-'a']--;
            }
            
        }
        
        string ans="";
        
        for(int i=0;i<m;i++)
        {
         
            for(int j=0;j<27;j++)
            {
                if(freq[i][j])
                    ans+=(char)('a'+j);
            }
            
        }
        
        cout<<ans<<"\n";
	}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
}
