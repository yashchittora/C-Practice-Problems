#include <stdio.h>

int main() {
    int n =5;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=(2*n)-1; j++){
            if (j<=n-i){
                printf(" ");
            }
            
            else if (j>n-i && j<=2*n-1-n+i) {
                printf("*");
            }
            
            else if(j>2*n-1-n+i){
                printf(" ");
            }
        }
    
        
        printf("\n");
    }
    

    return 0;
}


//     *    
//    ***   
//   *****  
//  ******* 
// *********