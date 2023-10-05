/*
Pointers and Array  :
-> array name itself act as a pointer
-> pointer stores ADDRESS of ANOTHER variable
-> int *p;  this pointer p contains address of a variable and datatype of THAT VARIABLE is integer
-> char *c; c is a pointer TO character
-> pointer is always in hexadecimal value
-> to print in hexadecimal value: %p
-> POINTER CANNOT contain a values, it will always store an address
-> Deferencing operator - using * operator(to get the value)
-> & : address of operator
-> * : deferencing operator


*/



#include<stdio.h>
int main(){
    int a[]={2,5,6,7,8,9};
    int b=10;
    int *p;  //nitialised a pointer p of variable datatype as integer
    p=&b;  //stores address of b
    printf("%d",p);  //POINTER CANNOT contain a values, it will always store an address
    printf("\n%d",b); //value of b
    printf("\n%d",*p); //prints (*) the value at address p
    printf("\n%p",&b); //prints address of b
    printf("\n%p",b); // value of b (in hexadecimal form)

    return 0;
}