/*
 * Codeforces gym101020I - Playing With Strings
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/I
 * Submission: https://codeforces.com/gym/101020/submission/102231559
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
char ch;
int main() {
	//freopen("window.in", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(cin>>tr;tr--;){
		cin>>s;n=s.length();
		a=b=mini=0;
		for(int i=97; i<=122; i++){
			t[i]=0;
		}
		for(int i=0; i<n; i++){
			t[(int)s[i]]++;
			
		}
		for(int i=97; i<=122; i++){
			if(t[i]){
				if( t[i]%2 == 0  ){
					a++;
				}else{
					b++;
				}
			}
		}
		if(b>1){
			cout<<"impossible";
		}else{
			if(b==0){
				
					for(int i=97; i<=122; i++){
						for(int j=0; j<t[i]/2; j++){
							cout<<(char)i;
						}
					}
					for(int i=122; i>=97; i--){
						for(int j=0; j<t[i]/2; j++){
							cout<<(char)i;
						}
					}
				
			}else{
				
				for(int i=97; i<=122; i++){
					if(t[i]%2 ==1){
						mini=i;
					}
						
					
				}
				for(int i=97; i<=122; i++){
					
						for(int j=0; j<t[i]/2; j++){
							cout<<(char)i;
						}
					
						
				}
					
							cout<<(char)mini;
					
					for(int i=122; i>=97; i--){
						
							for(int j=0; j<t[i]/2; j++){
								cout<<(char)i;
							}
						
					}		
			}
		}
		cout<<endl;
	}
}
/*
for(int i=0; i<n; i++){

	}
*/
