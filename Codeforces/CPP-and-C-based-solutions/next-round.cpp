#include <iostream>
int main(){
    int n,k;
    std::cin >>n>>k;
    int count = 0;
    int a[n+1];
    for(int i = 0;i<n;i++){
        std::cin >> a[i];
        
    }
    // for(int i = 0;i<n;i++){
    //     if(a[i] <= 0 ){
    //
    //     }
    // }
    for(int i = 0;i<=n;i++){
    if(a[i] > 0){
        if(a[i-1] == a[i] && i>=k-1){
            
            count++;
        }
        else if(a[i-1] != a[i] && i >= k){
            break;

        }
        else{
            count++;
        }
      }
    }

    std::cout<<count;
    return 0;
}
