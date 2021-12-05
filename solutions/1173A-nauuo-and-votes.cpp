/*
 * Codeforces 1173A - Nauuo and Votes
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1173/A
 * Submission: https://codeforces.com/contest/1173/submission/138079962
 * Solved: 2021-12-05 (VIRTUAL)
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


const int m=1e9+7;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
            int a,b,c;
        cin>>a>>b>>c;
    
    
    if(a==b && c==0)
    {
        cout<<"0\n";
        return 0;
    }
        
        
        if(c+min(a,b)>=max(a,b))
            cout<<"?";
        else
        {
            if(a>b)
                cout<<"+";
            else
                cout<<"-";
            
        }
        
        cout<<"\n";
        
        
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
