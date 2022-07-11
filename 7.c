#include<stdio.h>
#include<string.h>
int main(){
    //ascii value of uppercase alphabet :65 - 90
    //ascii value of lowercase alphabet :97-122

    char lower[50];
    printf("Enter the word :");
    gets(lower);

    for (int i = 0; i < strlen(lower); i++)
    {
        if (lower[i]>=97 && lower[i] <=122 )
        {
            lower[i]=lower[i]-32;
        }
        
    }
    printf("upper case word is :%s",lower);
    return 0;
}