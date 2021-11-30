/*
 * Codeforces 1609B - William the Vigilant
 * Rating: 1100 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1609/B
 * Submission: https://codeforces.com/contest/1609/submission/137485537
 * Solved: 2021-11-30 (VIRTUAL)
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
    
    
    
        int n,m;
        cin>>n>>m;
        
        string ch;
        
        cin>>ch;
        
        ch="ff"+ch+"ff";
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='a' && ch[i+1]=='b' && ch[i+2]=='c')
            {
                cnt++;
            }
        }
        //cout<<
        
        for(int i=0;i<m;i++)
        {
            int ind;
            char c;
            
            cin>>ind>>c;
            ind+=2;
            
            
            int b=0,a=0;
            for(int j=ind-3;j<ind;j++)
            {
                if(ch[j]=='a' && ch[j+1]=='b' && ch[j+2]=='c')
                {
                    b=1;
                }
            }
            
            
            ch[ind-1]=c;
            
            for(int j=ind-3;j<ind;j++)
            {
                if(ch[j]=='a' && ch[j+1]=='b' && ch[j+2]=='c')
                {
                    a=1;
                }
            }
            
            if(b==0 && a==1)
            {
                cnt++;
            }
            else if(b==1 && a==0)
            {
                cnt--;
            }
            
            cout<<cnt<<"\n";
            
            
            
            
                
            
        }
        
    
    
    
        
    
    
    
    
    
}
