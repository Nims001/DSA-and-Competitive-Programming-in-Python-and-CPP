#include <iostream>
#include <algorithm>
using namespace std;
typedef long long unsigned int llu ;
int main(){
    int t;
    cin >>t;

    while(t--){
        llu n;
        cin>>n;
        int a[n];
        for(llu i = 0;i<n;i++){
            cin>>a[i];
        }
    
        sort(a,a+n);

    

        if((a[n-1]+a[0])%2 == 0){
            cout<<0<<'\n';
        }
        else{
            int count{0};
            int count1{0};
            for(llu i = n-1;i>0;i--){
                if((a[0]+a[i])%2 == 0){
                    break;
                }
                else{
                    
                    count++;
                }
                if((a[n-i-1]+a[n-1])%2 ==0){
                    break;
                }
                else{
                    count1++;
                }
            }
            if(count1>count){

                cout<<count<<'\n';
            }
            else{
                cout<<count1<<'\n';
            }
        }
    }



    return 0;
}
