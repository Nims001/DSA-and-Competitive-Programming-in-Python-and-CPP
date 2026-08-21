#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a>>b;

    if(a<=b){
    cout << "Min = " << a << "\n" << "Max = " << b; 
}   else{
    cout << "Min = " << b << "\n" << "Max = " << a; 

}

    return 0;
}
