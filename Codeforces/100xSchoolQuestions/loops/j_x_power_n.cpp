#include <iostream>
using namespace std;

int main (){
	long long x,n;
	cin >>x>> n;
	long long ans{1};
	while(n--){
		ans *= x;
	}
	cout << ans;
	return 0;
}
