#include <iostream>
using namespace std;
 
int main (){
	long long n;
	cin >>n;
	
	long long num{0};
	while(n!= 0){
		long long d;
		d = n% 10;
		num = num * 10 + d;
		n = n / 10;
	}
	cout << num;
	return 0;
}
