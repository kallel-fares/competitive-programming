/*
 * Codeforces 1451C - String Equality
 * Rating: 1400 | Tags: dp, greedy, hashing, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1451/C
 * Submission: https://codeforces.com/contest/1451/submission/99806909
 * Solved: 2020-11-28 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> totab(string ch)
{
	vector <int>freq(27);
	for(int i=0;i<n;i++)
	{
		freq[ch[i]-'a']++;
	}
	return freq;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int k,v=0;
		vector <int> freq1(27);
		vector <int> freq2(27);
		string ch1,ch2;
		cin>>n>>k;
		cin>>ch1;
		cin>>ch2;
		freq1=totab(ch1);
		freq2=totab(ch2);
		
		/*for(int i=0;i<26;i++)
		{
			cout<<freq1[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<26;i++)
		{
			cout<<freq2[i]<<" ";
		}
		
		cout<<"\n";*/
		
		for(int i=0;i<26;i++)
		{
			if(freq2[i] && !freq1[i])
			{
				v=1;
			}
			if(!freq2[i] && freq1[i])
			{
				if(freq1[i]%k==0)
				{
					freq1[i+1]+=freq1[i];
				}
				else
				{
					v=1;
				}
			}
			if(freq2[i] && freq1[i])
			{
				if(freq2[i]>freq1[i])
					v=1;
				else
				{
					freq1[i]-=freq2[i];
					if(freq1[i]%k==0)
					{
						freq1[i+1]+=freq1[i];
					}
				}
			}
			
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}


}
