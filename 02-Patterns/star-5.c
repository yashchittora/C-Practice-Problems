#include <stdio.h>

int main(){
	int n = 5;

	for (int i = 1; i<=n; i++){
		
		if (i==1 || i==n){
			for (int j = 1; j<=n; j++){
				printf("* "); //star space
			}
		}

		else{

			for (int j = 1; j<=n; j++){
				
				if (j==1 || j==n){
					printf("* "); //star space
				}

				else {
					printf("  "); //2 spaces
				}
			}
		}	
		printf("\n");
	}

	return 0;
}


 
// * * * * * 
// * 	   * 
// *       * 
// *       * 
// * * * * *
