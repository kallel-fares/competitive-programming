/*
 * Codeforces 1607A - Linear Keyboard
 * Rating: 800 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1607/A
 * Submission: https://codeforces.com/contest/1607/submission/134349673
 * Solved: 2021-11-04 (VIRTUAL)
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
 
const int N=3e5+5;



int main ()
{
    testc
    {
        string ch,ch2;
        cin>>ch>>ch2;
        ll ans=0;
        map<char, int> freq;
        for(int i=0;i<ch.size();i++)
        {
            freq[ch[i]]=i;
        }
        
        for(int i=0;i<ch2.size()-1;i++)
        {
            ans+=abs(freq[ch2[i]]-freq[ch2[i+1]]);
        }
        
        cout<<ans<<"\n";
    }
    
    
    
 
}
