//sangngto
include <bits/stdc++.h>
int main(){
	bool sangngto(int n){
		vector<bool> isprime(n+1,true);
		isprime[0]=isprime[1]=false;
		for(int i=2;i*i<=n;i++){
			if(isprime[i]){
				for(int j=i*i;j<=n;j+=i){
					isprime[j]= false;
				}
			}
		}
		if(isprime[n]){
		return true;}
		else{
			false;
		}
	}
}
//c3:phuong phap toi uu hoa
bool check(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return false;
	}
	return true;
}
