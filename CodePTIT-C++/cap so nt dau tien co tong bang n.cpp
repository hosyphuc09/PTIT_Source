#include <iostream>
#include <iomanip>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
using ll = long long;

int nt(int n){
	if(n <= 1) return 0;
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int tc; cin >> tc;
	while(tc--){
		int n; cin >> n;
		int t = 0;
		for(int i = 2; i <= n/2 ; i++){
			if(nt(i) && nt(n-i)){
				t = 1;
				cout << i << " " << n-i << endl;
				break;
			}
		}
		if(t == 0) cout << "-1\n";
	}
}
