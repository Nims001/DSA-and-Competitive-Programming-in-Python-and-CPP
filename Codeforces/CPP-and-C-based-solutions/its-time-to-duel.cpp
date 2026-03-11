#include <iostream>
typedef long long unsigned int llu;
using namespace std;
int solve (int n){

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
 for(llu i = 0;i<n;i++){
           if(n>3){
            if((a[n-1] == a[0] && a[0] != a[1]) || (a[n-2] == a[n] && a[n]!= a[0]) ){
                cout<<"YES" <<endl;
            
                return 0;
            }

            else if(a[i]==a[i+1] && a[i+1] != a[i+2]){
                cout<<"YES"<<endl;
                
                return 0;
            }
            else{
             break;
            }}
            else if (n ==2){
                if(a[0] == a[1]){
                    cout<<""
                }
            }
    
        }
        cout<<"NO"<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        llu n;
        cin>>n;
        solve(n);

        
               //
        // for(int i = 0;i<n;i++){
        //
        // }

    }


    return 0;

}
