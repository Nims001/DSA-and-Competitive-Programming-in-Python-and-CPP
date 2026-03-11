#include <iostream>
#include <string>
using namespace std;
typedef long long unsigned int llu;


int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       getline(cin,s);
    
    string b = s;
    for(llu i = 0;i<s.length();i++){
        for(llu j = 0;j<s.length();j++){
            if(b.erase(1,j) == '('){

                }
        }
    }

    }
    return 0;
}
