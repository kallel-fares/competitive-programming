/*
 * Codeforces 1613A - Long Comparison
 * Rating: 900 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1613/A
 * Submission: https://codeforces.com/contest/1613/submission/137867050
 * Solved: 2021-12-03 (PRACTICE)
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
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    testc
    {
            
        
        string ch1,ch2;
        int a,b;
        cin>>ch1>>a>>ch2>>b;
        
        //cout<<ch1<<a<<ch2<<b;
        
        int v=0;
        //int i=0;
        
        while(ch1.size()<ch2.size())
        {
            ch1+='0',a--;
        }
        
        while(ch1.size()>ch2.size())
        {
            ch2+='0',b--;
        }
        
        
        for(int i=0;i<min(ch1.size(),ch2.size());i++)
        {
            //if()
            if(ch1[i]-'0'>ch2[i]-'0')
            {
                v=1;
                break;
            }
                
            else
            {
                if(ch1[i]-'0'<ch2[i]-'0')
                {
                    v=-1;
                    break;
                }
            }
                
            
            
            
        }
        
        //cout<<ch1<<" "<<a<<" "<<ch2<<" "<<b;
        
        if(ch1.size()+a>ch2.size()+b)
        {
            cout<<">";
        }
        else if(ch1.size()+a<ch2.size()+b)
        {
            cout<<"<";
            
        }
        else
        {
            if(v==1)
            {
                cout<<">";
            }
            else if(v==-1)
            {
                cout<<"<";
            }
            else
            {
                cout<<"=";
            }
        }
        cout<<"\n";
        
        
    }
        
    
    
    
}
