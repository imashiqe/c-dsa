// variable declaration  and  taking  elements  in  array

#include <stdio.h>

int main()
{
    int  array[100],position, i,n,value;

    printf("Enter number of elements in  array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n" , n);

    for(i = 1; i<= n; i++){
        scanf("%d" , &array[i]);
    }
   

  
    return 0;
}