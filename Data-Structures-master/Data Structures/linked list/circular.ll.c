#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *createnode()
{ int x;
    printf("Enter the data to be insrerted");
scanf("%d",&x);
   struct node *n;
   n=(struct node *)malloc(sizeof (struct node));
   return n;
}
void insert_beg();
void insert_end();
void insert_beforenode();
void insert_afternode();
void delete_beg();
void delete_end();
void delete_beforenode();
void delete_afternode();
void print();
int main()
{

    int ch;
   printf("CIRCULAR LINKED LIST:\n");
   printf("insertion at 1.beg,2.end,3.beforenode,4.afternode\n");
   printf("deletion at 5.beg,6.end,7.beforenode,8.afternode\n");
   pritf("9.exit");
   while(1)
   {
      printf("Select your option:");
       scanf("%d",&ch);
     switch(ch)
    {

     case 1:
    insert_beg();
        print();
        break;
     case 2:
    insert_end();
        print();
        break;
     case 3:
    insert_beforenode();
        print();
        break;
     case 4:
    insert_afternode();
        print();
        break;
     case 5:
    delete_beg();
        print();
        break;
     case 6:
      delete_end();
        print();
        break;
     case 7:
    delete_beforenode();
        print();
        break;
     case 8:
    delete_afternode();
        print();
        break;
     case 9:
        printf("Exit");
        exit(1);
        break;
    }
    return 0;
}
}

insert_beg()
{struct node *head=NULL;
struct node *temp;
struct node *last=head;
int x;
temp=createnode();
temp->data=x;
temp->prev=NULL;
temp->next=NULL;
if(head=NULL)
{
    head->next=temp;
    temp->next=head;
}
else
{

    while(last->next != head)
    {

      last=last->next;
    }
    last->next=temp;
    temp->prev=last;
    temp->next=head;
    head->prev=temp;
    head=temp;
}

}
