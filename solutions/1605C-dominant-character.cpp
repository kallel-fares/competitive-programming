/*
 * Codeforces 1605C - Dominant Character
 * Rating: 1400 | Tags: brute force, greedy, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1605/C
 * Submission: https://codeforces.com/contest/1605/submission/138017450
 * Solved: 2021-12-04 (PRACTICE)
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
    
    
    
        
        
    testc
    {
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        
        vector<string> dum={"aa","aba","aca","acba","abca","abbacca","accabba"};
        
        ll ans=-1;
        for(auto x:dum)
        {
            //cout<<x<<" "<<x.size()<<" ";
            
            int len=(int)x.size();
            for(int i=0;i<n;i++)
            {
                //cout<<string(ch.begin()+i,ch.begin()+len+i);
                if(x==string(ch.begin()+i,ch.begin()+len+i))
                {
                    ans=len;
                    break;
                }
                   
            }
            if(ans!=-1)
                break;
        }
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
