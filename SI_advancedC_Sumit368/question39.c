//Insert an element at a specific position in an array.
#include <stdio.h>

int main()
{
    int i, value, ins;
    int ar[10] = {1,2,3,4,5,6,7,8};
    int size = 8;
    printf("Enter index: ");
    scanf("%d", &ins);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    if(ins < 0 || ins > size)
    {
        printf("Invalid index");
        return 0;
    }
   for(i = size - 1; i >= ins; i--)
    {
        ar[i + 1] = ar[i];
    } ar[ins] = value;
    size++;
    printf("Modified array:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}