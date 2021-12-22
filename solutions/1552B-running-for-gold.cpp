/*
 * Codeforces 1552B - Running for Gold
 * Rating: 1500 | Tags: combinatorics, graphs, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1552/B
 * Submission: https://codeforces.com/contest/1552/submission/140260540
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


int wins(vector<int>& a, vector<int>& b)
{
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]<b[i])
            cnt++;
    }
    if(cnt>2)
    {
        return 1;
    }
    else
        return 2;
}

vector<vector<int>> trachah(vector<vector<int>>& vec)
{
    vector<vector<int>> aux;
    //cout<<vec.size()<<" ";
    int v=((int)vec.size())%2;
    //cout<<v<<" ";
    int wi=0;
    //cout<<"akjh";
    if(v)
    {
        //cout<<"akjhd";
        for(int i=0;i<((int)vec.size())-1;i++)
        {
            //cout<<"ad";
            if(wins(vec[((int)vec.size())-1],vec[i])==1)
            {
                //cout<<i<<" ";
                //aux.pb(vec[((int)vec.size())-1]);
                wi++;
            }
        }
        
        if(wi==((int)vec.size())-1)
        {
            //cout<<"he";
            aux.pb(vec[((int)vec.size())-1]);
        }
            
    }
    


    for(int i=0;i<((int)vec.size())-1-v;i+=2)
    {
        //cout<<i<<" ";
        if(wins(vec[i],vec[i+1])==1)
        {
            //cout<<"awd";
            aux.pb(vec[i]);
        }
        else
        {
            //cout<<"ss";
            
            //for(auto x:vec[i+1])
              //  cout<<x<<" ";
            aux.pb(vec[i+1]);
        }
    }

    //5
    //0 1 2 3 4
    
    
    return aux;
}


queue<int> q;



/*
 110 111

*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        int n;
        cin>>n;
        
        
        
        
        vector<vector<int>> vec(n,vector<int> (5)),aux;
        
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>vec[i][j];
            }
        }
        aux=vec;
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
            
        
        //cout<<aux.size()<<"|";
        
        while((int)aux.size()!=1)
        {
            
            //cout<<(int)aux.size()<<" ";
             aux=trachah(aux);
        }
        
        int wi=0;
        for(int i=0;i<n;i++)
        {
            
            if(wins(aux[0],vec[i])==1)
            {
                //cout<<i<<"|";
                //aux.pb(vec[((int)vec.size())-1]);
                wi++;
            }
        }
        
        //for(auto x:aux[0])
          //  cout<<x<<" ";
        
        //cout<<wi<<" ";
        if(wi==n-1)
        {
            for(int i=0;i<n;i++)
            {
                
                if(aux[0][0]==vec[i][0])
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        else
        {
            cout<<"-1\n";
        }
        //cout<<wins(vec[5],vec[4]);
        

        
        
    }
}
