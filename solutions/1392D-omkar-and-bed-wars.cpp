/*
 * Codeforces 1392D - Omkar and Bed Wars
 * Rating: 1700 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1392/D
 * Submission: https://codeforces.com/contest/1392/submission/140300968
 * Solved: 2021-12-22 (VIRTUAL)
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





queue<int> q;



/*
 110 111

*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        ll n;
        cin>>n;
        
        string ch;
        cin>>ch;
        
        int s=1;
        for(int i=1;i<n;i++)
        {
            if(ch[i]==ch[0])
                s++;
        }
        
        if(s==n)
        {
            cout<<n/3+min(1LL,n%3)<<"\n";
        }
        else
        {
            if(ch[n-1]=='R')
            {
                int i=0;
                while(ch[i]=='R')
                {
                    ch+='R';
                    i++;
                }
                
                while(ch[i]=='L')
                {
                    ch+='L';
                    i++;
                }
                
                ch=string(ch.begin()+i,ch.end());
                //cout<<ch<<"\n";
            }
            
            if(ch[n-1]=='L')
            {
                int i=0;
                
                while(ch[i]=='L')
                {
                    ch+='L';
                    i++;
                }
                
                ch=string(ch.begin()+i,ch.end());
                //cout<<ch<<"\n";
            }
            
            int j=n-1;
            
            
            int ans=0;
            //cout<<ch<<" ";
            while(j>0)
            {
                int l=0,r=0;
                while(ch[j]=='L')
                {
                    //cout<<"hi";
                    l++;
                    j--;
                }
                
                while(ch[j]=='R')
                {
                    r++;
                    j--;
                }
                l=max(0,l-2);
                r=max(0,r-2);
                
                ans+=l/3+min(1,l%3)+r/3+min(1,r%3);
                
            }
            
            cout<<ans<<"\n";
            
            
        }
        
        
        
    }
}
