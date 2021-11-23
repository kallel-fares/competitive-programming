/*
 * Codeforces 1610B - Kalindrome Array
 * Rating: 1100 | Tags: greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1610/B
 * Submission: https://codeforces.com/contest/1610/submission/136654347
 * Solved: 2021-11-23 (CONTESTANT)
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
    
    testc
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        map<int, int> freq;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
        }
        
        int w1=-1,w2=-1;
        for(int i=0;i<n;i++)
        {
            if(vec[i]!=vec[n-i-1])
            {
                w1=vec[i];
                w2=vec[n-i-1];
                break;
                
            }
            
        }
        
        if(w1==-1)
        {
            cout<<"YES\n";
        }
        else
        {
            int i=0,j=n-1,v=0;
            while(i<j)
            {
                if(vec[i]==w1)
                {
                    i++;
                    continue;
                }
                if(vec[j]==w1)
                {
                    j--;
                    continue;
                }
                if(vec[i]!=vec[j]){
                    
                    v++;
                    break;
                }
                else
                {
                    i++;
                    j--;
                }
            }
            i=0,j=n-1;
            while(i<j)
            {
                if(vec[i]==w2)
                {
                    i++;
                    
                    continue;
                }
                if(vec[j]==w2)
                {
                    j--;
                    continue;
                }
                if(vec[i]!=vec[j])
                {
                    
                    v++;
                    break;
                }
                else
                {
                    i++;
                    j--;
                }
            }
            
            
            if(v==2)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
            
            
        }
        
        
    }
    
    
    
    
}
