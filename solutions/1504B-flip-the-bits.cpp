/*
 * Codeforces 1504B - Flip the Bits
 * Rating: 1200 | Tags: constructive algorithms, greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1504/B
 * Submission: https://codeforces.com/contest/1504/submission/112142915
 * Solved: 2021-04-06 (VIRTUAL)
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
		int n;
		cin>>n;
		string ch1,ch2;
		cin>>ch1>>ch2;
		
		int v=0;
		
		
		int zeroes=0,ones=0,switcher=0;
		for(int i=0;i<n;i++)
		{
			if(ch1[i]=='1')
				ones++;
			else
				zeroes++;
		}
		
		
		for(int i=n-1;i>=0;i--)
		{
			
			//cout<<zeroes<<" "<<ones<<"\n";
			if(switcher)
			{
				if(ch1[i]=='1')
					ch1[i]='0';
				else
					ch1[i]='1';
			}
				
			if(ch1[i]!=ch2[i])
			{
				if(ones!=zeroes)
				{
					//cout<<zeroes<<" "<<ones<<" "<<ch1<<" "<<i<<" ";
					v=1;
					break;
				}
				else
				{
					switcher=(switcher+1)%2;
					//cout<<"\n"<<switcher<<" "<<i<<"\n";
					if(!switcher)
					{
						if(ch1[i]=='1')
							ch1[i]='0';
						else
							ch1[i]='1';
					}
					int aux=ones;
					ones=zeroes;
					zeroes=aux;
					i++;
				}
			}
			else
			{
				if(ch1[i]=='0')
					zeroes--;
				else
					ones--;
			}
		}
		
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	
	}


}
