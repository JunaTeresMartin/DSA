/*
-> 2D-array of arrays/matrix
-> 2D array declaration:   int a[2][3]={1,2,3,4,5,6} ;
-> row size is optional:  int a[2][];  WRONG
-> column size is MANDATORY:  int a[][4];  CORRECT
*/

#include<stdio.h>
int main(){
    int a [3][3]={1,2,4,3,6,5,7,9,8};
    int *p;
    p=&a[0][0];
    int *q;
    q=a[0];
    printf("%d\n",p);
    printf("%d",q);
    return 0;
}