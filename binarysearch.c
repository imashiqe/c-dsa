//binary search

#include <stdio.h>

int main ()

{

int a[100];

int i,n,left,right,mid,target;

printf("Enter the size of the array :");

scanf("%d",&n);

printf("\n Enter %d elements in the array:\n",n);

for(i=0;i<n;i++)

{

printf("\nEnter %d element in the array: ",i);

scanf("%d",&a[i]);

}

{

printf("Enter the element you searching for :");

scanf("%d",&target);

}

left=0;

right=n-1;

for(i=0;i<n;i++){

mid=(left+right)/2;

if(a[mid]==target){

printf("%d found at index %d\n",target,mid);

return 0;

}

else if (a[mid]<target){

left=mid+1;

}

else{

    right=mid-1;

    }

 

    }

    printf("Not found\n");
return 0;

 

}