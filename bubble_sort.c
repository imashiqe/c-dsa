#include<stdio.h>

int main()

{
    int array[100] , n, c, d, swap;

    printf("Enter number of elements\n");
   scanf("%d", &n);
    printf("Enter %d  integer\n", n);

    for (c = 1; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 1 ; c < n - 1; c++)
  {
    for (d = 1 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 1; c < n; c++)
     printf("%d\n", array[c]);

  return 0;

}