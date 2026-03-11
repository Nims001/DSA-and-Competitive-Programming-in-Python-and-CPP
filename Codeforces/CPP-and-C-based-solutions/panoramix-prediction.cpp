#include <iostream>
typedef long long unsigned int llu ;
int main(){
    llu n,m;
    std::cin>>n>>m;

    for(llu i =n+1;i<m;i++){
        int count{0};
        for(llu j = 2;j <i;j++){ // i initially did j<m in here so it showed wrong answer on test 20 with test case: n = 2 and m = 5
             if(i%j == 0){
              count++;
            }

        }
        if(count ==0){
            std::cout << "NO";
            return 0;
        }
        
        
    }
    int c{0};
    for(llu i = 2;i<m;i++){
        if(m%i == 0){
            c++;
        }
    }
   if(c == 0){
    std::cout << "YES";
    }
   else{
        std::cout<<"NO";
    }



    return 0;
}
