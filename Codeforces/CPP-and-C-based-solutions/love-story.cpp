#include <iostream>
int main(){
    
    int t;
    std::cin>>t;
    while(t--){
        char s[11];
        char c[11] = {'c','o','d','e','f','o','r','c','e','s'};
        for(int i = 0;i<10;i++){
            std::cin>>s[i];
        }
        int count{0};
        for(int i = 0;i<10;i++){
            if(c[i]!=s[i]){
                count++;
            }
        }
        std::cout<<count <<'\n';

    }




    return 0;
}
