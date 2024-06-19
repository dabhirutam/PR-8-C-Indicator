#include<stdio.h>

main(){
	
	int a,b;
	
	printf("Enter value A :- ");
	scanf("%d", &a);
	printf("Enter value B :- ");
	scanf("%d", &b);
	 
	int *pa = &a, *pb = &b;
	int ps = *pa;
	*pa = *pb; 
	*pb = ps;
	
	printf("\nA = %d \nB = %d", *pa,*pb);
}
