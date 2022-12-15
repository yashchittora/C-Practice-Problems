#include <stdio.h>

int main(){
	int n = 5;
	for (int q = 1; q<=2; q++){
		for (int i = 1; i<=(2*n)-2; i++){
			
			if (i<=n){
				for (int j = 1; j<=i; j++){
				printf("*");
				}
			}

			else{
				for (int j = 1; j<=n-(i-n); j++){
				printf("*");
				}
			}
			

			printf("\n");
		}
		
	}
	printf("*\n");
	return 0;
}


// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *