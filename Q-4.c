#include<stdio.h>

main(){

    char str[] = "Hellow, Good Morning";
    char *ps = &str;
    char *pp = &*ps;
    int r,l;

    for(r=0; str[r]!=NULL; r++){
        ps++;
    }
    l = ps - pp;
    printf("String is :- %s", str);
    printf("\nLength of string is = %d", l);
}