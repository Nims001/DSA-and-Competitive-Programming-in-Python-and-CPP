#include <iostream>
typedef long long unsigned llu;
using namespace std;
int main(){
   llu t;
    cin>>t;
   while(t--){
        
       int n;
        cin>>n;
        int a{0},b{0};
        for(int i = 0;i<n;i++){
          for(int j = 0;j<n;j++){

                if((i+j)*(i+j) == n){
                   a = i;
                   b = j;
                   break;
                }
            }
        }
        if(a!=0||b!=0){
        cout<<a<<' '<<b<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }


        }





    return 0;
}
