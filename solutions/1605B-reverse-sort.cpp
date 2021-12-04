/*
 * Codeforces 1605B - Reverse Sort
 * Rating: 1000 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1605/B
 * Submission: https://codeforces.com/contest/1605/submission/138009070
 * Solved: 2021-12-04 (VIRTUAL)
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
    
    
    testc{
        
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        
        vector<int> ans;
        
        
        int i=0,j=ch.size()-1;
        
        while(i<j)
        {
            if(ch[j]=='0')
            {
                if(ch[i]=='1')
                {
                    ans.pb(i+1);
                    ans.pb(j+1);
                    i++;
                    j--;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                j--;
            }
            
            
        }
        
        if(ans.size()==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
            cout<<ans.size()<<" ";
            sort(ans.begin(), ans.end());
            for (auto x:ans)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
