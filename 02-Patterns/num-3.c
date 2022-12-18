#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i=1; i<=n; i++){
        int count = 1;
        for (int j=1; j<=n; j++){
            if (j <= n-i){
                printf(" ");
            }
            
            else if (j>n-i) {
                printf("%d ",count);
                count++;
            }
            
        }
    
        printf("\n");
    }
    
    return 0;
}


//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 


