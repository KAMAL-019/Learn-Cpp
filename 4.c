#include<stdio.h>
 int main( )
{
 int arr[ ] = { 10, 20, 36, 72, 45, 36 } ;
 int *j, *k ;
 j = &arr [ 4 ] ;
 k = ( arr + 4 ) ;
 printf("address is %d and address is %d \n",j,k);
 if ( j == k )
 printf ( "The two pointers point to the same location" ) ;
 else
 printf ( "The two pointers do not point to the same location" ) ;
} 