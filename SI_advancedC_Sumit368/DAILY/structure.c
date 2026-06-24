#include <stdio.h>
 struct employee{
  char *name[10];
  int age;
  int salary;
 };
 int manager ()
 {
  struct employee manager;
  manager.age = 27;
  if( manager.age > 30)
  manager.salary = 60000;
  else
  manager.salary = 50000 ;
  return manager.salary ;  
 }
 int main () 
 {
  struct employee emp1 ;
  struct employee emp2;
  printf("enter your salary: ");
  scanf("%d",&emp1.salary);
  printf("\nenter your salary for emp1 : ");
  scanf("%d",&emp2.salary);
  printf("\n%d is the salary for emp1",emp1.salary);
  printf("\n%d is the salary for emp2",emp2.salary);
  printf("\n%d is the salary for manager",manager());

  return 0;
}