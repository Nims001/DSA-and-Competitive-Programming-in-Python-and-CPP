#include <iostream>
int main(){
   int m[5][5];
   int a{0},b{0};
    int steps{0};
   for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            std::cin >> m[i][j];
        }
    }

   for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(m[i][j] == 1){
                a = i;
                b = j;
                break;
            }
        }
    }    
    
   while(a!=  2 || b != 2){ //NOTE: doing a!=2 && b!=2 prints out number of steps just 1 short of what is actually needed, using || fixed it but idk how
        if(a>2){
            a--;
            steps++;
        }

        if(a<2){
            a++;
            steps++;
        }

        if(b<2){
            b++;
            steps++;
        }
        if (b>2){
            b--;
            steps++;
        }
    }


    std::cout<<steps;


    return 0;
}
