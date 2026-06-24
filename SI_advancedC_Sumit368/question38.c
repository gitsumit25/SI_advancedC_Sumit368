#include <stdio.h>

int main()
{
    int temp, ar[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5 / 2; i++)
    {
        temp = ar[i];
        ar[i] = ar[4 - i];
        ar[4 - i] = temp;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", ar[i]);

    return 0;
}