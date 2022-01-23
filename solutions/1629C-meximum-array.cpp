/*
 * Codeforces 1629C - Meximum Array
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy, math, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1629/C
 * Submission: https://codeforces.com/contest/1629/submission/143816452
 * Solved: 2022-01-23 (PRACTICE)
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
 110 111
 
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
        
        vector<int> vec(n);
        vector<int> fre(n+1);
        
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            fre[vec[i]]++;
        }
        
       //,indmaxi=0;
        vector<int> ans;
        
        //int aux=n;
        int mark=0;
        while(mark<n)
        {
            int mex=0;
            for(int i=0;i<=n;i++)
            {
                if(!fre[i])
                {
                    mex=i;
                    ans.pb(mex);
                    break;
                }
            }
            //cout<<mex<<" ";
            set<int> s;
            for(;mark<n;mark++)
            {
                if(vec[mark]<mex)
                {
                    s.insert(vec[mark]);
                }
                
                fre[vec[mark]]--;
                //aux--;
                if(s.size()==mex)
                {
                    mark++;
                    break;
                }
                
            }
            
        }
        
        
        
        
        
        
        cout<<ans.size()<<"\n";
        
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
        
        
        
    }
     
}
