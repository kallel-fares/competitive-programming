/*
 * Codeforces 1579B - Shifting Sort
 * Rating: 1100 | Tags: implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1579/B
 * Submission: https://codeforces.com/contest/1579/submission/136826511
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
        
        int n;
        cin>>n;
        vector<int> vec(n),c;
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        c=vec;
        vector<vector<int>> ans;
        sort(c.begin(), c.end());
        //cout<<n<<"\n";
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(c[i]==vec[j] && i!=j)
                {
                    vector<int> s={i+1,j+1,max(j-i,1)};
                    //cout<<i+1<<" "<<j+1<<" "<<max(j-i,1)<<"\n";
                    ans.pb(s);
                    for(int k=j;k>=i+1;k--)
                    {
                        int aux=vec[k-1];
                        vec[k-1]=vec[k];
                        vec[k]=aux;
                    }
                    
                    break;
                }
            }
        }
        cout<<ans.size()<<"\n";
        for(auto x:ans)
        {
            for(auto y:x)
                cout<<y<<" ";
            cout<<"\n";
        }
            
        
        
        
        
    }
    

    
        
        
    
    
    
    
    
}
