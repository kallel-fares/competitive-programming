/*
 * Codeforces 1506E - Restoring the Permutation
 * Rating: 1500 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1506/E
 * Submission: https://codeforces.com/contest/1506/submission/144462011
 * Solved: 2022-01-29 (PRACTICE)
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
        
        
        vector<int> vec(n+1),mark(n+1);
        
        
        set<int> se;
        
        for(int i=1;i<=n;i++)
            se.insert(i);
        
        
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
        }
        int j=1;
        for(int i=1;i<=n;i++)
        {
            if(vec[i]!=vec[i-1])
            {
                mark[vec[i]]=1;
                cout<<vec[i]<<" ";
            }
            else
            {
                while(mark[j])
                {
                    j++;
                }
                mark[j]=1;
                cout<<j<<" ";
            }
        }
        cout<<"\n";
        
        for(int i=1;i<=n;i++)
        {
            if(vec[i]!=vec[i-1])
            {
                //mark[vec[i]]=1;
                se.erase(vec[i]);
                cout<<vec[i]<<" ";
            }
            else
            {
                
                auto it=se.find(min(vec[i]+1,n));
                
                it--;
                cout<<*it<<" ";
                se.erase(it);
                
            }
        }
        cout<<"\n";
        
        /*
         3 3 4 4 7 7 7
         1 2 5 6
         */
              
    }
    
     
}
