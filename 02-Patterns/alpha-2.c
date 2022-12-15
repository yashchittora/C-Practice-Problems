#include <stdio.h>

int main(){
	int n = 5;
	
	for (int i = 1; i<=n; i++){
		char alpha = 'A';
        for (int j = 1; j<=i; j++,alpha++){
			printf("%c",alpha);
		}
		printf("\n");
	}

	return 0;
}


// A
// AB
// ABC
// ABCD
// ABCDE

