/*
 * Codeforces 1633A - Div. 7
 * Rating: 800 | Tags: brute force
 * Problem:    https://codeforces.com/problemset/problem/1633/A
 * Submission: https://codeforces.com/contest/1633/submission/144678005
 * Solved: 2022-01-31 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
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
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        int n,aux;
        cin>>n;
        
        aux=n;
        
        int len=-1;
        
        while(aux)
        {
            aux/=10;
            len++;
        }
        //cout<<len<<" ";
        int low=1,high=9;
        for(int i=0;i<len;i++)
        {
            low*=10;
            high=10*high+9;
        }
        //cout<<low<<" "<<high<<"\n";
        
        int ans=0,mini=4;
        for(int i=low;i<=high;i++)
        {
            if(i%7)
                continue;
            else
            {
                int cnt=3;
                for(int k=1;k<=100;k*=10)
                {
                    if(i/k==n/k)
                        cnt--;
                }
                
                if(mini>cnt)
                {
                    ans=i;
                    mini=cnt;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
    
     
}
