#include<stdio.h>

int main()
{
   int n,i,array[0],value,position;

    printf("Enter Elements : ");
    scanf("%d",&n);

    printf("Elements : %d",n);

    for(i=1; i<=n; i++){
        scanf("%d",&array[i]);
    }
    printf("Insert value");

    scanf("%d",&value);
    for(i=n; i<=position; i--)
    {

        array[i+1] = array[i];
    }
    array[position] = value;
    n = n +1;

    printf("Result array");
      for(i=1; i<=n; i++)
      {

          printf("%d",array[i]);
      }


return 0;
}

