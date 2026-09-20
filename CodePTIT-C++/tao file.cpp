// lam viec voi file che do van ban

#include <iostream>
#include <fstream>
using namespace std;
int main(){
//	//ghi du lieu vao file
//	//b1:mo file
//	ofstream f;
//	f.open("test.txt");
//	//b2 ghi du lieu vao file
//	string s;
//	getline(cin,s);
//	f<<s;
//	//b3 dong file
//	f.close();
    ifstream f;
    f.open("Test.txt");
    //b2 doc du kieu tu file
    string s;
    getline(cin,s);
    cout<<s;
    //b3 dong file
    f.close();
	return 0;		
}
