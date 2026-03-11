#include <iostream>
#include <stdio.h>
int main(){
    long long unsigned int n;
    std::cin>>n;
    int anton{0},danik{0};
    char w[n+1];
    for(long long unsigned int i = 0;i<n;i++){
        std::cin>>w[i];
    }
    for(long long unsigned int i = 0;i<n;i++){
        if(w[i] == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(danik>anton){
        printf("Danik");
    }
    else if(anton>danik){
        printf("Anton");
    }
    else{
        printf("Friendship");
    }


    return 0;
}
