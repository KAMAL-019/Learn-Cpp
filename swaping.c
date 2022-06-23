#include<stdio.h>
int main()
{
    int celsius , fahrenheit;
    printf("enter the temp in celsius\n");
    scanf(" %d ",&celsius);
    fahrenheit = (9*celsius)/5 + 32;
    printf("temp in fahrenheit will be :%d",fahrenheit);
    return 0;
}