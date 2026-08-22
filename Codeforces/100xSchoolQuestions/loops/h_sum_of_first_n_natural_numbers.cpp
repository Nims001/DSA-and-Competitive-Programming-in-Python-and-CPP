#include <iostream>
using namespace std;

int main(){
//NOTE: USING INT DOESN'T SATISFY EDGE CASES WHERE LARGE NUMBERS ARE ENTERED
//      THAT'S WHY LONG LONG IS BEING USED
	long long n;
	cin >> n;
	long long sum{0};
	for(int i = 1;i<=n;i++){
		sum += i;
	}
	cout << sum;

	return 0;
}
