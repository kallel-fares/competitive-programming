/*
 * Codeforces 1611A - Make Even
 * Rating: 800 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1611/A
 * Submission: https://codeforces.com/contest/1611/submission/136844883
 * Solved: 2021-11-25 (CONTESTANT)
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
        
        string ch;
        cin>>ch;
        
        int first=0,v=0;
        
        if((ch[ch.size()-1]-'0')%2==0)
        {
            cout<<"0\n";
            continue;
        }
        if((ch[0]-'0')%2==0)
        {
            cout<<"1\n";
            continue;
        }
        for(int i=0;i<ch.size();i++)
        {
            if((ch[i]-'0')%2==0)
                v=1;
        }
        if(v)
            cout<<"2\n";
        else
            cout<<"-1\n";
        
        
    }
    

    
        
        
    
    
    
    
    
}
