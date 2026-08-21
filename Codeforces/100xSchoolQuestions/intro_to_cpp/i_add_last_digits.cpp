#include <iostream>

int main(){
    int n,m;
    std::cin >> n >> m;
    int ln,lm;
    ln = n%10;
    lm = m%10;

    std::cout << ln + lm;

    return 0 ;
}
