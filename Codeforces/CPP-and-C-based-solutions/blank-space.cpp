#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long unsigned int llu;
int main(){
    int t;
    std::cin>>t;

    while(t--){
      llu n;
      std::cin >>n;
      int a[n+1];

        for(llu i = 0;i<n;i++){
            std::cin>>a[i];
        }

        
    std::vector<int> counts;
        int countmax{0};
        
       for(llu i = 0;i<n;i++){
           
          if(a[i] == 0){
                countmax++;
                 counts.push_back(countmax); 
          }
          else{
              
              countmax = 0;
              
            }
        
        }
     

     sort(counts.begin(),counts.end(),greater<int>());

   if (!counts.empty()) {
    std::cout << counts.front() << '\n';
     } else{
    std::cout << 0 <<'\n'; 
      }


    }



    return 0;
}
