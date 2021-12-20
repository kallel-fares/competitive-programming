/*
 * Codeforces 1619C - Wrong Addition
 * Rating: 1200 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1619/C
 * Submission: https://codeforces.com/contest/1619/submission/140066894
 * Solved: 2021-12-20 (CONTESTANT)
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
        ll a,s;
        cin>>a>>s;
        
        
        vector<ll> ans;
        int v=0;
        while(s)
        {
            //cout<<a<<" ";
           // if(!a)
             //   continue;
            
            if(s%10<a%10)
            {
                
                
                
                int aux1=s%10,aux2=a%10;
                s/=10;
                aux1=(s%10)*10+aux1;
                s/=10;
                a/=10;
                
                if(aux1-aux2>9 || aux1-aux2<0)
                {
                    v=1;
                    break;
                }
                else{
                    ans.pb(aux1-aux2);
                }
                
                
                //17236 1106911
                
            }
            else
            {
                int aux1=s%10,aux2=a%10;
                s/=10;
                a/=10;
                ans.pb(aux1-aux2);
            }
            
        }
        
        //cout<<s<<" "<<a<<" ";
        if(v || a)
        {
            cout<<"-1\n";
        }
        else
        {
            int v=0;
            
            vector<ll>aux;
            
            
            for(int i=(int)ans.size()-1;i>=0;i--)
            {
                //cout<<ans[i]<<" ";
                if(ans[i])
                    v=1;
                if(v)
                    aux.pb(ans[i]);
            }
            //reverse(aux.begin(), aux.end());
            
            if(aux.size()==0)
                aux.pb(0);
            for(auto x:aux)
                cout<<x;
            cout<<"\n";
        }
    }
  /*
   99
    1
   100
   
   1 100
   
   
   */
}
