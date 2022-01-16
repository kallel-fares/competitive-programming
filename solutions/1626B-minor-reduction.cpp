/*
 * Codeforces 1626B - Minor Reduction
 * Rating: 1100 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1626/B
 * Submission: https://codeforces.com/contest/1626/submission/143014416
 * Solved: 2022-01-16 (CONTESTANT)
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
        string ch;
        cin>>ch;
        
        /*
         2525
         
         725
         257
         
         11511
         2511
         1611
         
         178
         138
         615
         
         
         1023
         123
         105
         
         */
        
        int maxi=0,ind=0,v=0;
        for(int i=0;i<ch.size()-1;i++)
        {
            
            int aux=ch[i]-'0'+ch[i+1]-'0';
            
            if(aux>=10)
                v=1;
            
        }
        
        
        string ans="";
        for(int i=ch.size()-2;i>=0;i--)
        {
            
            int aux=ch[i]-'0'+ch[i+1]-'0';
            
            
            if(v && aux>9)
            {
                string aux1=string(ch.begin(),ch.begin()+i), aux2=string(ch.begin()+i+2,ch.end());
                //int aux=ch[i]-'0'+ch[i+1]-'0';
                            
                if(aux/10)
                    aux1=aux1+char('0'+aux/10);
                            //if(aux%10)
                aux1=aux1+char('0'+aux%10);
                ans=aux1+aux2;
                
                break;
            }
            
            
            
            
            
        }
        
        if(ans.size())
        {
            cout<<ans<<"\n";
            continue;
        }
        
        int aux=ch[0]-'0'+ch[1]-'0';
        string aux1=string(ch.begin(),ch.begin()), aux2=string(ch.begin()+2,ch.end());
        if(aux/10)
            aux1=aux1+char('0'+aux/10);
                    //if(aux%10)
        aux1=aux1+char('0'+aux%10);
        ans=aux1+aux2;
        cout<<ans<<"\n";
            
            
            
            
        
        
        
    }
    
}
