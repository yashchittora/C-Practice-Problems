#include <stdio.h>

int main(){
	int n = 5;

	for (int i = 1; i<=(2*n)-1; i++){
		
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