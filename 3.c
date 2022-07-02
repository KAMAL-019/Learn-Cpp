// factorial of given number
#include<stdio.h>
int fact(int n);

int main(){
    printf("factorial of given number is : %d" ,fact(5));
    return 0;

}
int fact(int n){
    if(n == 1 || n == 0)
    {
    return 1;
    }
    int a = fact(n-1);
    int b = a * n;
    return b;
}