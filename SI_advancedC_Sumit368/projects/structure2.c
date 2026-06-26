#include <stdio.h>

struct names 
{
  char name[3][10];
};

int main () {
  struct names b = {{"sumit" , "chahar" , "rohan" , "sparsh" , " vishesh"}};
  for(i= 0 ; i < 3 ; i++)
  printf("%\n",b.name[i]);
  return 0;
}