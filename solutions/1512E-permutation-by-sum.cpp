/*
 * Codeforces 1512E - Permutation by Sum
 * Rating: 1600 | Tags: brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1512/E
 * Submission: https://codeforces.com/contest/1512/submission/113006090
 * Solved: 2021-04-14 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n,l,r,s;
		
		map<int,int> freq;
		cin>>n>>l>>r>>s;
		
		vector<int> ans(n);
		int len=r-l+1;
		//cout<<(s-(len*(len+1))/2)/len+min(1,(s-(len*(len+1))/2)%len)+len<<" ";
		
		int maxi=(s-(len*(len+1))/2)/len+min(1,(s-(len*(len+1))/2)%len)+len;
		if(maxi>n || (len*(len+1))/2>s)
		{
			cout<<"-1\n";
		}
		else
		{
			//cout<<min(1,(s-(len*(len+1))/2)%len)<<" ";
			//cout<<maxi;
			
			vector<int> aux;
			int mark=(s-(len*(len+1))/2)%len;
			for(int i=len;i>=1;i--)
			{
				if(mark)
				{
					aux.pb(i+1+(s-(len*(len+1))/2)/len);
					mark--;
				}
				else
				{
					aux.pb(i+(s-(len*(len+1))/2)/len);
				}
			}
			/*for(auto x:aux)
				cout<<x<<" ";
			cout<<"\n";*/
			int d=0;
			for(int i=l-1;i<r;i++)
			{
				ans[i]=aux[d];
				freq[aux[d]]++;
				d++;
			}
			
			int j=1;
			for(int i=0;i<n;i++)
			{
				if(!ans[i])
				{
					while(freq[j])
					{
						j++;
					}
					freq[j]++;
					ans[i]=j;
				}
			}
			
			for(auto x:ans)
				cout<<x<<" ";
			cout<<"\n";
		}
		
	
	}


}
