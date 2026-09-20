#include <bits/stdc++.h>
using namespace std;
struct sophuc{
	int a=1,b=0;
	sophuc operator + (const sophuc other){
		sophuc tong;
		tong.a=a+other.a;
		tong.b=b+other.b;
		return tong;
	}
};
int main(){
	sophuc a,b;
	
	sophuc c=a+b;
	cout<<c.a<<endl;
}
