
#include <bits/stdc++.h>
using namespace std;

struct nhanvien{
    string maso,hoten;
    float hs;
    int lcb,pc;
    float Tongluong;
};
void nhapnv(nhanvien arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i].maso;
        cin.ignore();
        getline(cin,arr[i].hoten);
        cin>>arr[i].hs>>arr[i].lcb>>arr[i].pc;
    }
}
void tongluong(nhanvien arr[],int n){
    for(int i=0;i<n;i++){
       arr[i].Tongluong=arr[i].lcb*arr[i].hs+arr[i].pc;
       cout<<arr[i].maso<<" :"<<arr[i].Tongluong<<endl;
    }
}
bool cmp( nhanvien a, nhanvien b){
    return a.Tongluong<b.Tongluong;
}
void nhanvientongluongthapnhat_caonhat( nhanvien arr[],int n){
    sort(arr,arr+n,cmp);
    cout<<"nhan vien co luong thap nhat: "<<arr[0].maso<<" : "<<arr[0].Tongluong;
    cout<<"nhan vien co luong cao nhat: "<<arr[n-1].maso<<" : "<<arr[n-1].Tongluong;
}
int main(){
    int n;cin>>n;
    nhanvien arr[n];
    nhapnv(arr,n);
    tongluong(arr,n);
    nhanvientongluongthapnhat_caonhat(arr,n);
    
    return 0;
}
