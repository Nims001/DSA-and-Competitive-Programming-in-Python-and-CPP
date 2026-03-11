#include <iostream>
int main(){
    int t;
    std::cin >>t;
    while(t--){
        int h,m;
        std::cin>>h>>m;
        int ans{0};
        while(h<23){
            
            ans = ans+60;
            h++;
        }
        while(m!=60){
            ans = ans +1;
            m++;
        } 
        

        std::cout<<ans <<'\n';


    }



    return 0;
}
