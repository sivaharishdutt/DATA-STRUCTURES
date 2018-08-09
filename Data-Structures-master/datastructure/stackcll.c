#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *next;
}*top;

void popStack()
{
    struct Node *temp, *var=top;
    if(var==top)
    {
        top = top->next;
		printf("deleted data is %d \n",var->Data);
        free(var);
    }
    else
    printf("\nStack Empty");
}

void push(int value)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->Data=value;
    if (top == NULL)
    {
         top=temp;
         top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

int main(int argc, char *argv[])
{
     int i=0;
     top=NULL;
     printf(" \n1. Push to stack");
     printf(" \n2. Pop from Stack");
     printf(" \n3. Exit\n");
     while(1)
     {
          printf(" \nChoose Option: ");
          scanf("%d",&i);
          switch(i)
          {
               case 1:
               {
               int value;
               printf("\nEnter a valueber to push into Stack: ");
               scanf("%d",&value);
               push(value);
               break;
               }
               case 2:
               {
               popStack();
               break;
               }
               case 3:
               {
               exit(0);
               }
               default:
               {
               printf("\nwrong choice for operation");
               }
         }
    }
}
