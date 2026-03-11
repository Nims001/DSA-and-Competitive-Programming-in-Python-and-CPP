//NOTE: Time: 46 ms
//      Memory: 100 KB
#include <iostream>
int main(){
    int k,n,w;
    std::cin>>k>>n>>w;
    int total = 0;
    for(int i = 1;i<=w; i++){
       total = total + i*k;
    }
    
    if((total-n) > 0 ){
        std::cout << (total -n);
    }
    else{
        std::cout << 0;
    }

    return 0;
}


// NOTE: A better solution with 0 ms execution speed and 0 kb memory used


//      #include <bits/stdc++.h>
//     using namespace std;
//
//     int main()
//     {
//       long long int n,k,w;
//       cin>>k>>n>>w;
//       long long int a = (w*(w+1)*k)/2;
//       if(a <= n)
//         cout<<0<<endl;
//       else
//         cout<<a - n<<endl;
//       return 0;
//     }   
