/*
 * Codeforces 1579A - Casimir's String Solitaire
 * Rating: 800 | Tags: math, strings
 * Problem:    https://codeforces.com/problemset/problem/1579/A
 * Submission: https://codeforces.com/contest/1579/submission/136823973
 * Solved: 2021-11-25 (VIRTUAL)
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
        
        int a=0,b=0,c=0;
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i]=='A')
                a++;
            if(ch[i]=='B')
                b++;
            if(ch[i]=='C')
                c++;
        }
        if(a+c==b)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
        
    }
    

    
        
        
    
    
    
    
    
}
