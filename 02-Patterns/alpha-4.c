#include <stdio.h>

int main(){
	int n = 5;
	
	for (int i = 1; i<=n; i++){
		char alpha = 'A';
        for (int j = 1; j<=n; j++){
			if (j<=n-i){
				printf(" ");
			}
			else{
				printf("%c",alpha);
				alpha++;
			}	
		}
		printf("\n");
	}

	return 0;
}


//     A
//    AB
//   ABC
//  ABCD
// ABCDE

