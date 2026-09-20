#include <bits/stdc++.h>
using namespace std;
int main(){
	//c1: cap phat bo nho tinh
	int x=3;
	cout<<"x="<<x<<" &x"<<&x;
	// c2: cap phat bo nho dong
	int *ptr=new int(3);
	cout<<"\n gia tri "<<*ptr<<" dia chi="<<ptr;
	delete ptr;
	cout<<"\n gia tri sau "<<*ptr<<" dia chi sau="<<ptr;
// cap phat bo nho cho 1 mang gia tri{3,4,5,6}
//c1: cap phat bo nho tinh
    int x[4]={3,4,5,6};
//c2: cap phatbo nho mang dong
    int *ptr=new int[4];
    for(int i=0;i<4;i++){
	cin>>ptr[i];
}
    cout<<"\nBefore: ";
    for(int i=0;i<4;i++){
	cout<<ptr[i]<<" ";
	
}
    delete []ptr;
    cout<<"\nAfter: ";
    for(int i=0;i<4;i++){
	cout<<ptr[i]<<" ";
}
}
