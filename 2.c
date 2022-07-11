#include<stdio.h>
int main(){
    int i , *a ; float j ,*b; char k , *c;
    i = 3;
    j = 1.4;
    k = 'k';
    a = &i;
    b = &j;
    c = &k;
    printf("element is %d address is %d %d",i,a,&i);
    a++;
 printf("element is %d address is %d %d",i,a,&i);
}