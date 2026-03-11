#include <iostream>
typedef long long unsigned int llu;
int main(){
    

    int t;
    std::cin>>t;
    while(t--){
        llu n;
        std::cin>>n;
        char s[n+1];
        for(llu i=0;i<n;i++){
            std::cin>>s[i];
        }

        for( llu i = 0;i<n;i++){
           for(llu j = i+1;j<n;j++)
                if((int)s[j] < (int)s[i] && s[i+1] != '\0'){
                 char garbage{s[j]};
                s[j] = s[i];
               s[i] = garbage;   
            }
            
        }
        int count{0};
        for(llu i = 1;i<n;i++){
            if(s[i-1] != s[i]){
                count = count +2;
            }
            else{
                count++;
            }
        }
        std::cout << count+2 << '\n';
    }
    return 0;
}
