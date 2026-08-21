#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cin >>a>>b>>c;

    if(a >= b && b >= c ){
 
    cout << "Min = " << c << "\n" << "Max = " << a; 
    } else if (b >= a && a >= c){


    cout << "Min = " << c << "\n" << "Max = " << b; 
}   else if( c>= a && a>=b){

    cout << "Min = " << b << "\n" << "Max = " << c; 
}   else if( c>=b && b>=a){

    cout << "Min = " << a << "\n" << "Max = " << c; 
}   else if(b>= c && c>=a){

    cout << "Min = " << a << "\n" << "Max = " << b; 
} else{

    cout << "Min = " << b << "\n" << "Max = " << a; 
}

    return 0;
}
