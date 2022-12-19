#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j <= n-i){
                printf(" ");
            }
            
            else if (j>n-i) {
                printf("* ");
            }
        }   
        printf("\n");
    }   
    
    for (int i=n-1;i>=1;i--){
        for (int j=1; j<=n; j++){
            if (j <= n-i){
                printf(" ");
            }
            
            else if (j>n-i) {
                printf("* ");
            }
            
        }
        printf("\n");
    }    

    return 0;
}


//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 


