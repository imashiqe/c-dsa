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
//    Step-2: 

  printf("Enter the location where you wish to delete elements\n");

  scanf("%d" , &position);

  if(position >n)
    {
        printf("Deletion bot possible. \n");

    }else{
        for(i = position; i<n; i++)
        {
            array[i] = array[i+1];
        }
        n=n-1;
    }
      
// Step-3: Show the Updated Array
    printf("Resultant array is \n");

    for(i =1; i<= n; i++)
     {
        printf("%d\n", array[i]);
       
     }

    return 0;
    return 0;
}