// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     int res[t];
//     for (int i = 0; i < t; i++)
//     {

//         int x,y,a;
//         scanf("%d %d %d",&x,&y,&a);
//         long d = 2* a + 1;
      
//         long dug = 0;
//         int k = 1;
//         long c = d/(x+y);
//         long remain =  
//         while(dug<d){
            

//             if(k == 1){
//                dug = dug + 2*x;
//                k = 0;
//             }
//             else{
//                 dug = dug + 2*y;
//                 k = 1;
//             }
          
//         }
//         if (k == 0){
//             res[i] = 1;
//         }
//         else if(k == 1){
//             res[i] = 0;
//         }
//     }

//     for(int i = 0;i<t;i++){
//         if(res[i] == 1)
//          printf("NO\n");
//         else 
//          printf("YES\n");

//     }


//     return 0;
// }


#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    char results[t];  // Array to store results

    for (int i = 0; i < t; i++) {
        int x, y, a;
        scanf("%d %d %d", &x, &y, &a);

        int depth = 2 * a + 1;  // Convert a.5 to integer-based depth
        int cycle_sum = x + y;  // Total meters dug in 2 days
        int full_cycles = depth / cycle_sum;  // Number of complete 2-day cycles
        int remaining_depth = depth - full_cycles*cycle_sum;  // Depth left after full cycles

        if (remaining_depth > 0 && remaining_depth <= x) {
            results[i] = 'N';  // "NO"
        } else {
            results[i] = 'Y';  // "YES"
        }
    }

    // Print all results at once
    for (int i = 0; i < t; i++) {
        if (results[i] == 'N')
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}




// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);
    
//     while (t--) {
//         int x, y, a;
//         scanf("%d %d %d", &x, &y, &a);

//         // Multiply everything by 2 to avoid floating-point issues
//         int depth = 2 * a + 1;
//         int dug = 0;
//         int turn = 0;  // 0 for Little B, 1 for Little K
        
//         while (dug < depth) {
//             if (turn == 0) {  // Little B digs
//                 dug += 2 * x;
//                 if (dug >= depth) {
//                     printf("NO\n");
//                     break;
//                 }
//                 turn = 1;
//             } else {  // Little K digs
//                 dug += 2 * y;
//                 if (dug >= depth) {
//                     printf("YES\n");
//                     break;
//                 }
//                 turn = 0;
//             }
//         }
//     }
    
//     return 0;
// }
