#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct NhanVien {
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKy;
};

void nhap(NhanVien &nv) {
    cin.ignore(); 
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKy);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << setw(5) << setfill('0') << i + 1 << " ";
        cout << ds[i].hoTen << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh << " ";
        cout << ds[i].diaChi << " " << ds[i].maSoThue << " " << ds[i].ngayKy << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}
