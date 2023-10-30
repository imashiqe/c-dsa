#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, array[SIZE];

void push();
void pop();
void show();

int main()

{
     int choice;

     while(1)
     {
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
               push();
               break;
            case 2:
               pop();
               break;
            case 3:
               show();
               break;
            case  4:
             exit(0);

             default:
             printf("\n invalid")   ;   

        }
     }
}



void push()
{
    int x;

    if(top == SIZE -1)
    {
        printf("\n overflow");
    }
    else{
        scanf("%d", &x);
        top = top +1;
        array[top] = x;

    }
}

void pop()
{
     if(top == -1)
       {
          printf("\n Underflow");
       }
       else{
          printf("\n popped element: %d", array[top]);
          top = top -1;
       }
}


void show()
{
     if(top == -1)
     {
        printf("\n Underflow");
     }
     else{
        printf("\n Element Present in the stac : \n");
        for(int i = top; i>=0; --i)
        {
            printf("%d\n", array[i]);
        }
     }
}





