#include <iostream>
int main(){
    int n{};
    int x{0};

    std::cin >> n;
    char op[n][4];
    for(int i = 0;i<n;i++){
        std::cin >> op[i];
    }
    // for(int i = 0;i<n;i++){
    //     std::cout << op[i] <<'\n';
    // }
    for(int i = 0;i<n;i++){

        if(op[i][0] == '+' && op[i][1] == '+'){
            x++;
        }
        else if (op[i][0] == '-' && op[i][1] == '-') {
            x--;
        }
        else if(op[i][1] == '+' && op[i][2] == '+' ){
            x++;
        }
        else if(op[i][1] == '-' && op[i][2] == '-'){
            x--;
        }
        
    }
    std::cout << x;
    return 0;
}
