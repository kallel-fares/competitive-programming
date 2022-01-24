/*
 * Codeforces 1616C - Representative Edges
 * Rating: 1500 | Tags: brute force, geometry, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1616/C
 * Submission: https://codeforces.com/contest/1616/submission/143895010
 * Solved: 2022-01-24 (PRACTICE)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        int n;
        cin>>n;
        
        
        
        vector<float> vec(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                float step=(vec[j]-vec[i])/(j-i);
                float start=vec[i]-(step*i);
                int count=0;
                
               
                for(int x=0;x<n;x++)
                {
                    //cout<<start+step*x<<" ";
                    if(abs(vec[x]-(start+step*x))<1e-4)
                        count++;
                    
                    //cout<<count<<" ";
                }
                maxi=max(count,maxi);
                //cout<<"\n";
                
                
                
            }
        }
        //cout<<maxi<<"asd";
        cout<<n-maxi<<"\n";
        
        
    }
        
        
     
}
