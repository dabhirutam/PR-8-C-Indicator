#include<stdio.h>

main(){

    int arry[50];
    int r,s;
    int *pa = &arry;

	printf("Enter the size of arry :- ");
	scanf("%d", &s);

	for(r=0; r<s; r++){
		printf("Enter array[%d] :- ", r);
		scanf("%d", &arry[r]);
	}

    for(r=0; r<s; r++){
        printf("\n\narry[%d] is = %d", r, *pa);
        printf("\narry[%d] address is = %u", r, pa++);
    }
}