/*
 * Codeforces 1582C - Grandma Capa Knits a Scarf
 * Rating: 1200 | Tags: brute force, data structures, greedy, strings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1582/C
 * Submission: https://codeforces.com/contest/1582/submission/132884030
 * Solved: 2021-10-24 (CONTESTANT)
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
 
 

int ispala(string & ch,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ch[i]!=ch[n-i-1])
            return 0;
    }
    return 1;
}

 
int main ()
{
    
    
    testc
    {
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        
        if(ispala(ch,n))
        {
            cout<<"0\n";
            continue;
        }
        
        int ans=1000066;
        
        for(int i=0;i<26;i++)
        {
            char c='a'+i;
            string aux="";
            for(int j=0;j<n;j++)
            {
                if(ch[j]!=c)
                {
                    aux+=ch[j];
                }
                    
            }
            if(ispala(aux,aux.size()))
            {
                int l=0,r=n-1,s=0;
                while(l<=r)
                {
                    if(ch[l]==ch[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        s++;
                        if(ch[l]==c)
                            l++;
                        else
                            r--;
                    }
                    
                }
                ans=min(ans,s);
            }
        }
        if(ans==1000066)
            cout<<"-1\n";
        else
            cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
 
}
