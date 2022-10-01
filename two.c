#include<stdio.h>
struct Employee{
int id;
char name[20];
float salary;
};
void display(struct Employee e);
struct  Employee input();
int main(){
struct Employee b;
b=input();
display(b);
return 0;
}
struct  Employee input(){
  struct Employee b1;
  printf("Enter the id name and salary of the employee\n");
  scanf("%d",&b1.id);
  fflush(stdin);
  fgets(b1.name,20,stdin);
  scanf("%f",&b1.salary);
  return b1;
}
void display(struct Employee e){
    printf("\nDisplaying the detail\n");
    printf("%d %s %f ",e.id,e.name,e.salary);
}