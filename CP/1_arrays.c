/* 
-> 1 int var = 4 bytes
   eg: int a=5; 
-> char - 1 byte

array declaration
int a[60];

array initialization: at compile time(can change array size), also at run time(can't change array size)
compile time:
eg: int a[5]={4,6,3,2,7}; (5*4 bytes)
    int a[5]={4,6,3,2,7,10,8,9};  (wrong)
    int a[5]={4,6,3}; (correct)
    disadvantage: wastage of space 
    eg: char a[5] = {'a','s','d', \n, \n}
run time:
using loop we can take values from the user


ARRAY : array is a FIXED size sequenced collection of data items of same data type
        data items are stored in continuous locations.

        3 types:
            1-D array
            2-D array
            multi-dimensional array


Operations on arrays:
        1. Traversal
        2. Insertion
        3. deletion
        4. Searching
        5. Sorting


*/


#include<stdio.h>
int main(){
    int a[50],n,i;//declaration, 50*4 bytes are allocated
    printf("Enter the size of the array: ");
    scanf("%d",&n); //n*4 bytes 
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of the array: ");
    
    
    //    -----TRAVERSAL-----
    for (i=0;i<n;i++){
        printf("%d",a[i]);
    }

    //    -----INSERTION-----
    printf("\nYou want to insert at index: ");
    int pos;
    scanf("%d",&pos);
    printf("Number you want to insert at the given index: ");
    int num;
    scanf("%d",&num);
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    if(pos<=0 || pos>n+1){
        printf("Invalid position");
    }

    //    -----DELETION-----
    printf("Delete at index: ");
    scanf("%d",pos);
    for (i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;

    return 0;
}