/*
 * Codeforces 1616B - Mirror in the String
 * Rating: 1100 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1616/B
 * Submission: https://codeforces.com/contest/1616/submission/143866593
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
        
        string ch;
        cin>>ch;
        /*
         
         cbaaaa
         
         
         cbaabc
         
        cbbba
        dccccbbbbbaaaa
         
         
         
         
         
         cbbc
         
         bbaa
         bb
         bbaaaabb
         cbbbaabbbbc
         */
        
        string aux="";
        aux+=ch[0];
        
        if(ch.size()>1)
        {
            if(ch[1]==ch[0])
            {
                
                cout<<aux<<aux<<"\n";
                continue;
            }
            for(int i=1;i<n;i++)
            {
                if(ch[i]<=ch[i-1])
                {
                    aux+=ch[i];
                }
                else
                {
                    break;
                }
            }
        }
            
        
        
        
        
        cout<<aux<<string(aux.rbegin(),aux.rend())<<"\n";
        
    }
        
        
     
}
