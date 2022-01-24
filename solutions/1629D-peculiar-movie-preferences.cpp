/*
 * Codeforces 1629D - Peculiar Movie Preferences
 * Rating: 1700 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1629/D
 * Submission: https://codeforces.com/contest/1629/submission/143857505
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
        
        map<string, int> fre,fre3;
        //vector<string> vec;
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            
            if(ch[0]==ch[ch.size()-1])
            {
                v=1;
            }
            
            if(fre[ch] || fre3[ch])
            {
                v=1;
            }
            
            /*
             qwe
             wq
             */
            
            
            fre[string(ch.rbegin(), ch.rend())]++;
            
            if(ch.size()==3)
            {
                if(fre[string(ch.begin()+1,ch.end())] || fre3[ch])
                    v=1;
                
                
                fre3[string(ch.rbegin(), ch.rend())]++;
                string aux="";
                aux+=ch[1];
                aux+=ch[0];
                //cout<<aux<<" ";
                fre3[string(aux.begin(),aux.end())]++;
            }
            
            
            
            
            
            
            
            
            
            
        }
        
        if(v)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
        
        
    }
        
        
     
}


/*
 
 abc
 def
 ba
 
 
 
 */
