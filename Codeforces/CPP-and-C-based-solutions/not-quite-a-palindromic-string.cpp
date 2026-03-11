#include <iostream>
using namespace std;
typedef long long unsigned int llu ;

void solve(){
    llu n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    bool bin[n];
    for(llu i = 0;i<n;i++){
        bin[i] = s[i] - '0';
    }
    int pairs{0};

    

}




int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
