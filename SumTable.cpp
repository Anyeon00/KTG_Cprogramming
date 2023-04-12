#include <stdio.h>

int Sum(int x);

int main(void){
	int n = 0;
	
	
	 for(int i = 0; i < 10; i++){
	 	for(int j = 0; j< 10; j++){
	 		if(i==0&&j==0){
	 			printf("%c%c%c%c%c%c", 1, 6, 6, 6, 6, 6);
			 }
			 else if(i==0&&j!=0){
			 	printf("%c%c%c%c%c%c", 22, 6, 6, 6, 6, 6);
			 	if(j==9){
			 		printf("%c", 2);
				 }
			 }
			 else if(i!= 0 && j == 0){
			 	printf("%c%c%c%c%c%c", 25, 6, 6, 6, 6, 6);
			 }
			 else{
			 	printf("%c%c%c%c%c%c", 16, 6, 6, 6, 6, 6);
			 	if(j == 9){
			 		printf("%c", 23);
				 }

			}

		 }
		 printf("\n");
	 	for(int j = 0; j < 10; j++){
	 		n++;
			printf("%c%5d", 5, Sum(n));
			if(j == 9){
				printf("%c", 5);
			}
		 }
		 printf("\n");
		 if(i==9){
		 	for(int j = 0; j < 10; j++){
		 		if(j==0)
		 			printf("%c%c%c%c%c%c", 3, 6, 6, 6, 6, 6);
		 		
				 else {
				 	printf("%c%c%c%c%c%c", 21, 6, 6, 6, 6, 6);
				 }
				 if(j==9)
				 	printf("%c", 4);
			 }
		 }
	 }
	
	return 0;
}

int Sum(int x){
	if(x<0) return 0;
	if(x==0) return 0;
	if(x==1) return 1;

	return Sum(x-1) + x;
}
