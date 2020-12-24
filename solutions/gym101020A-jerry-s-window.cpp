/*
 * Codeforces gym101020A - Jerry's Window
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/A
 * Submission: https://codeforces.com/gym/101020/submission/102197914
 * Solved: 2020-12-24 (VIRTUAL)
 */

#include <bits/stdc++.h>
#include <string.h>
#include<math.h>
#include<iostream>

using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
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
char sw(char c){
	if(c=='0'){
		return '1';
	}else{
		return '0';
	}
}

const long long N=3e6+7;
long long l,k,d,tr,n,m,sum,mini,maxi,a,b,c,x,y;
long long t[N],t1[N];
set <int> vis;
vector<int> v;
bool ok; 
string s,ss;
int main() {
	freopen("window.in", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(cin>>tr;tr--;){
		cin>>a>>b;
		cout<<a*b<<endl;
	}
}
/*
for(int i=0; i<n; i++){

	}
*/
