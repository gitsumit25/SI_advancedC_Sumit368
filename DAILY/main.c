// Source - https://stackoverflow.com/q/20721877
// Posted by Assaf, modified by community. See post 'Timeline' for change history
// Retrieved 2026-03-30, License - CC BY-SA 3.0

/*
main:

we will try to get an input from the user.
if we succeed, call insert function. 
if we don't succeed, call freeList function.
if we encounter '\n' or EOF, we quit the program.
print the list, the free it.

insert (type void. does not return a value):

if allocation is successful, then we can put a new item in the linked list. 
the item is a type node.
we don't care the number of nodes in the list. 
if allocation is not successful, call free function.

free:
free the memory.

*/

#include <stdio.h>
#include <stdlib.h>
typedef struct list *ptr;
typedef struct list{
    char data;
    ptr next;
}node;  /*describes a linked list.*/
void insert(ptr *H, char c);
void freeList(ptr *H);
void printList(ptr *H);

int main(){
char c;  
printf("enter a string\n");
ptr H=(ptr)malloc(sizeof(node));/*create an empty list. this is its head.*/
while ((c=getchar())!=EOF && c!='\n'){  
    insert(&H,c);
    }
printList(&H); /*print the list*/
freeList(&H); /*free the list*/
printf("\n");
return 0;
}
void insert(ptr *H, char c){
    ptr p1;
    p1=*H;
    ptr T=(ptr)malloc(sizeof(node)); /*try to allocate a new memory cell*/
    if (!T)
    {
        printList(H);       
        freeList(H); /*we should not free H because we will 
            lose the list we've created.*/
    }
    else
    {
        T->data=c;
        while(p1->next)
        {
            p1=p1->next;
        }
        p1->next=T; /*add T to the end of the linked list*/

    }


}
void freeList(ptr *H){
    ptr p1; /*helper pointer*/
    while(*H){      /*while H points to a certain node*/
    p1=*H;
    (*H)=p1->next;
    free(p1);
    }   
}
void printList(ptr *H){ /*a copy of H is sent so no problem working with it.*/
    ptr p1=*H; printf("string is: \n");
    while (p1) /*while H is not null        */
    {
        printf("%c", p1->data);
        p1=p1->next;
    }

}
