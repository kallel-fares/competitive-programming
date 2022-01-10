/*
 * Codeforces 1624D - Palindromes Coloring
 * Rating: 1400 | Tags: binary search, greedy, sortings, strings
 * Problem:    https://codeforces.com/problemset/problem/1624/D
 * Submission: https://codeforces.com/contest/1624/submission/142258143
 * Solved: 2022-01-10 (CONTESTANT)
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
    
    testc{
        
        int n,k;
        cin>>n>>k;
        
        string ch;
        cin>>ch;
        
        
        vector<int> vec(30);
        
        for(int i=0;i<n;i++)
            vec[ch[i]-'a']++;
        
        
        int p=0,imp=0;
        for(int i=0;i<27;i++)
        {
            p+=vec[i]/2;
            imp+=vec[i]%2;
        }
        //cout<<p<<" "<<k<<"||";
        if(p/k!=0)
            cout<<(p/k)*2+min(1,((p%k)*2+imp)/k)<<"\n";
        else
            cout<<min(1,(p*2+imp)/k)<<"\n";
        
        
        //for(int i=0;i<27;i++)
          //  cout<<vec[i]<<" ";
        //cout<<"\n";
        
        
        
        
        /*
         2 2 2
         
         3
         
         
         */
        
    }
    
}
