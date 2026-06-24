//Rotate an array left or right by N positions.
#include <stdio.h>

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int n = 5;
    int rot ;
    printf("enter you value of N: ");
    scanf("%d",&rot);
     for(int r = 0; r < rot; r++)
   {   int temp = ar[n - 1];
        for(int i = n - 1; i > 0; i--)
        {
          ar[i] = ar[i - 1];
        }
       ar[0] = temp;
    }
    for(int i = 0; i < n; i++)
    printf("%d ", ar[i]);
    return 0;
}