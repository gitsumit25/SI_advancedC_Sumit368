#include <stdio.h>
int main () {
int n = 0 , z = 1 ,roll[10] , eng[10] , maths[10] , bio[10] , cs[10] ,physics[10] , chem[10] ,count = 0; 
char name [10][20] ;

printf("============================================================\n");
printf("\t\tSTUDENT MARKS MANAGEMENT\n");
printf("============================================================\n");
while(n!=3)
{
printf("\t1. Enter new student record\n");
printf("\t2. Review student record\n");
printf("\t3. Exit\n");
printf("\tEnter you choice (from 1 , 2 , 3): ");
scanf("%d",&n);

switch ( n )
{
  case 1 : 
         z = 1;
          for( int i = 0 ; i < 10 ; i++) 
        { 
          while(getchar() != '\n');
          if(z == 1)
          {
            
          for( int j = i ; j <=i ; j++){
           printf("\tEnter student name: ");
           fgets(name[i], 20 ,stdin);}
           printf("\tEnter roll number: ");
           scanf("%d",&roll[i]);
           printf("\tEnter your student marks\n");
           printf("\tIn ENGLISH: ");
           scanf("%d",&eng[i]);
           printf("\tIn MATHS: ");
           scanf("%d",&maths[i]);
           printf("\tIn BIOLOGY: ");
           scanf("%d",&bio[i]);
           printf("\tIn CS: ");
           scanf("%d",&cs[i]);
           printf("\tIn PHYSICS: ");
           scanf("%d",&physics[i]);
           printf("\tIn CHEMESTRY: ");
           scanf("%d",&chem[i]);
           printf("\n\t1. Add more\n");
           printf("\t2. exit\n");
           count++;
           printf("\tEnter your choice from 1 and 2: ");
           scanf("%d",&z);
          }
          else 
          break;
        }
           break;
case 2: 
    printf("\n--- REVIEWING RECORDS ---\n");
    if (count == 0) {
        printf("\tNo records found! Please add a student first.\n");
    } else {
        for(int i = 0; i < count; i++) {
            printf("\n\t----------------------------\n");
            printf("\tStudent Name: %s\n", name[i]);
            printf("\tRoll No: %d\n", roll[i]);
            printf("\tMarks: Eng=%d, Math=%d, Bio=%d, CS=%d, Phy=%d, Chem=%d\n", 
                   eng[i], maths[i], bio[i], cs[i], physics[i], chem[i]);
        }
    }
    break; 

case 3 : break;
default : printf("\tINVALID INPUT< CHOOSE FROM 1, 2, 3");
}
}
return 0;
}
