#include <stdio.h>
#include <stdlib.h>


void printArray(int* p, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", *(p+i));
	}
	
}

void swap(int* a, int* b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void BubbleSort(int* p, int n){
	int* s;
	s = p; 
	int max = *p;
	for(int i = 0; i < n-1; i++){	//전체 도는 횟수 
		for(int j = 0; j < n-1-i; j++){	//한사이클 도는 횟수 
			if(*(p+j) > *(p+j+1)){
				swap(&p[j], &p[j+1]);
			}
		}
	}
}

int main(void){
	
	int arrLength;
	int* arr;
	scanf("%d", &arrLength);
	
	arr = (int *)malloc(sizeof(int)*arrLength);
	
	
	for(int i = 0; i < arrLength; i++){
		scanf("%d", &arr[i]);
	}
	printf("before sorting :");
	printArray(arr,arrLength);
	printf("\n");
	BubbleSort(arr, arrLength);
	printf("after sorting: ");
	printArray(arr, arrLength);
	
	return 0;
}
