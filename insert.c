

#include <stdio.h>

int main()
{
    int  array[0],position, i,n,value;
// variable declaration  and  taking  elements  in  array
    printf("Enter number of elements in  array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n" , n);

    for(i = 1; i<= n; i++){
        scanf("%d" , &array[i]);
    }
//    Step-2: Insert new Value in Array
     printf("Enter the location where you wish to insert an elements\n");

    scanf("%d" , &position);

    printf("Enter the value to insert\n");

    scanf("%d", &value);

    for(i=n; i >= position; i--)
    {
        array[i+1] = array[i];

    }
    array[position] = value;

    n=n+1;
// Step-3: Show the Updated Array
    printf("Resultant array is \n");

    for(i =1; i<= n; i++)
     {
        printf("%d\n", array[i]);
        return 0;
     }

    return 0;
}