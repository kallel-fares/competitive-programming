/*
 * Codeforces gym100155C - Encrypted Password
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100155/problem/C
 * Submission: https://codeforces.com/gym/100155/submission/110155320
 * Solved: 2021-03-17 (VIRTUAL)
 */


#include <bits/stdc++.h>
#include <string.h>
#include<math.h>
#include<iostream>
#include <time.h>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
//__gcd
bool isPrime(long long n)
{
	long long c;
    // Corner case
    if (n <= 1)
        return false;
	c=sqrt(n);
    // Check from 2 to n-1
    for (int i = 2; i <= c; i++)
        if (n % i == 0)
            return false;

    return true;
}
double po(double a,long long p)
{
	if(p==0)
		return 1;
	if(p==1)
		return a;

	double aux=po(a,p/2);
	if(p&1)
		return aux*aux*a;
	else
		return aux*aux;
}
int rec(int n){
	if(n==1 || n==2){
		return n;
	}else{
		return rec(n-1)+2;
	}
}
int dd(long long n)
{
    int count = 0;
    while (n != 0) 
    {
        n = n / 10;
        ++count;
    }
    return count;
}
bool comp(pair<int,int> a,pair<int,int> b)
	{
		if(a.first!=b.first) return a.first<b.first;
		return a.second>b.second;
	}

const long long N=3e5+3;
long long l,k,d,tr,m,sum,mini,c,e,x,y,f,g,h,q,n,b,a,ii,jj,r,p;
long long t1[N],t2[N],t3[N],t[N];
char mat[2005][2005];

pair<string , vector<int>  > mm[200];
set <long long> vis;
set <long long> dis;
vector<pair<long long,long long >> v;
vector <long long> v1;
string s,ss,sss;
//vector<int> mat[30];
double maxi;

int main() {
	//freopen("icecream.in", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>ss>>s;
	m=ss.length();n=s.length();
	for(int i=0; i<n; i++){
		t1[(int)s[i]]++;
	}
	for(int i=0; i<n; i++){
		t2[(int)ss[i]]++;
	}
	maxi=1;
		for(int j=97; j<123; j++){
			if(t1[j] != t2[j] ){
				maxi=0;
			}
		}
		if(maxi){
			mini++;
		}
	for(int i=1; i<=m-n; i++){
		t2[(int)ss[i-1]]--;
		t2[(int)ss[i+n-1]]++;
		maxi=1;
		for(int j=97; j<123; j++){
			if(t1[j] != t2[j] ){
				maxi=0;
			}
		}
		if(maxi){
			mini++;
		}
	}
	if(mini){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
/*
for(int i=0; i<n; i++){

	}
*/
