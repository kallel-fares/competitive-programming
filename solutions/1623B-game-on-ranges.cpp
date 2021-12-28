/*
 * Codeforces 1623B - Game on Ranges
 * Rating: 1100 | Tags: brute force, dfs and similar, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1623/B
 * Submission: https://codeforces.com/contest/1623/submission/140933532
 * Solved: 2021-12-28 (CONTESTANT)
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
    
    
    
    
    testc
    {
        int n;
        cin>>n;
        vector<pair<int, int>> vec;
        
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            vec.pb(make_pair(a,b));
        }
        
        
        /*for(int i=0;i<n;i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<"\n";
        }*/
        
        for(int i=0;i<n;i++)
        {
            pair<int, int> l={-1,-1},r={-1,-1};
            
            int leni=vec[i].second-vec[i].first;
            
            
            if(vec[i].first==vec[i].second)
            {
                cout<<vec[i].first<<" "<<vec[i].first<<" "<<vec[i].first<<"\n";
                continue;
            }
            
            int maxil=-1,maxir=-1;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                int lenj=vec[j].second-vec[j].first;
                
                
                if(lenj+1==leni)
                {
                    if(vec[i].first==vec[j].first)
                    {
                        cout<<vec[i].first<<" "<<vec[i].second<<" "<<vec[i].second<<"\n";
                        break;
                    }
                    else if(vec[i].second==vec[j].second)
                    {
                        cout<<vec[i].first<<" "<<vec[i].second<<" "<<vec[i].first<<"\n";
                        break;
                    }
                    
                }
                
                if(vec[j].first==vec[i].first && lenj>maxil && lenj<leni)
                {
                    //cout<<"hi ";
                    l=make_pair(vec[j].first, vec[j].second);
                    maxil=lenj;
                }
                
                if(vec[j].second==vec[i].second && lenj>maxir && lenj<leni)
                {
                    //cout<<"hey ";
                    r=make_pair(vec[j].first, vec[j].second);
                    maxir=lenj;
                }
                
                if(maxil+maxir+2==leni && l.first!=-1 && r.first!=-1)
                {
                    cout<<vec[i].first<<" "<<vec[i].second<<" "<<l.second+1<<"\n";
                    break;
                }
                
            }
        }
    }
    
    
}
