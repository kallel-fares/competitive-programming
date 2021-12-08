/*
 * Codeforces 1604C - Di-visible Confusion
 * Rating: 1300 | Tags: brute force, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1604/C
 * Submission: https://codeforces.com/contest/1604/submission/138463153
 * Solved: 2021-12-08 (PRACTICE)
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



const int m=1e9+7;


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n+1),tol(n+1);

        
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
            //tol[i]=tol[i-1]+min(1,vec[i]%(i+1));
        }
        
        int v=1;
        for(int i=n;i>=1;i--)
        {
            v=1;
            if(vec[i]%(i+1)==0)
            {
                v=0;
                for(int j=i-1;j>=1;j--)
                {
                    if(vec[i]%(j+1))
                    {
                        v=1;
                        break;
                    }
                }
                if(!v)
                    break;
            }
            
            
        }
        
        if(!v)
            cout<<"NO";
        else
            cout<<"YES";
        
        cout<<"\n";
        
    }
    
            
        
    
    
    
}
