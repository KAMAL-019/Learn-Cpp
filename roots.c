#include<stdio.h>
#include<math.h>
int main()
{
    int a ,b,c;
    printf("Enter a , b , c :");
    scanf("%d %d %d",&a,&b,&c);

    int D = b*b - 4*a*c;
    // double E = pow(D,n);
    int root1 = (-b + sqrt (D))/2*a;
    int root2 = (-b - sqrt(D))/2*a;
    printf("D is : %d ",D);
    printf("roots are: %d\t%d",root1,root2);
    return 0;
}