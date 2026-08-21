#include <iostream>
using namespace std;

int main(){
	


	int pos{0},neg{0},ev{0},odd{0};
	int n;
	cin >> n;
	while(n--){
		int i;
		cin >> i;
		if (i > 0){
			pos++;
		}
		if(i<0){
			neg++;
		}

		if(i%2 == 0){
		ev++;
		}else{
		odd++;
		}
	}
	cout << pos << "\n" << neg << "\n" << ev << "\n" << odd << "\n";


	return 0;
}
