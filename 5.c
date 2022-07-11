#include<stdio.h>
void view(int *j, int n);

int main(){
     int num[]={1,2,3,4,5};
     view(&num[0],5);
}
void view (int *j , int n){
    for (int  i = 0; i < 5; i++)
    {
        printf("address is : %d  elements is : %d\n",j,*j);
        j++;
    }
    
}