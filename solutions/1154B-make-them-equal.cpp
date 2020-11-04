/*
 * Codeforces 1154B - Make Them Equal
 * Rating: 1200 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1154/B
 * Submission: https://codeforces.com/contest/1154/submission/97635336
 * Solved: 2020-11-04 (PRACTICE)
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
	
		vector <int> vect(105);
		
		
		int n,a=0,b=0,c=0,v=0,p;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>p;
			if(vect[p])
				continue;
			
			vect[p]++;
			
			if(!a)
	    	    a=p;
	    	else if(!b)
	    	    b=p;
	    	else if(!c)
	    	    c=p;
	    	else
	    	    v=1;
			/*
			if(!vect[a])
				s++;
			vect[a]++;*/
		}
		
		
		if(v)
		{
			
			cout<<"-1";
			return 0;
		}
		if(c==0 && b==0)
		{
			cout<<"0";
			return 0;
		}
			
		if(c==0)
		{
			//cout<<"degla";
			if(a%2 == b%2)
			{
				cout<<(a+b)/2-min(a,b);
			}
			else
			{
				cout<<abs(a-b);
				
			}
			return 0;
			
		}
			
		if((min(min(a,b),c)+max(max(a,b),c))%2==0 && (((min(min(a,b),c)+max(max(a,b),c))/2)==a || (min(min(a,b),c)+max(max(a,b),c))/2==b || (min(min(a,b),c)+max(max(a,b),c))/2==c))
		{
			cout<<(min(min(a,b),c)+max(max(a,b),c))/2-min(min(a,b),c);
		}
		else
		{
			cout<<"-1";
		}
		
		
		
	
	


}
