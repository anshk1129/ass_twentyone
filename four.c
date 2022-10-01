#include<stdio.h>
struct Employee{
int id;
char name[20];
float salary;
};
struct Employee input();
void display(struct Employee e[]);
int main(){
struct Employee b[5];
for(int i=0;i<5;i++){
  b[i]=input();
}
display(b);
return 0;
}
struct Employee input(){
  struct Employee b;
  printf("Enter the id name and salary of the employee\n");
   scanf("%d",&b.id);
  fflush(stdin);
  fgets(b.name,20,stdin);
  scanf("%f",&b.salary);
  return b;
}
void display(struct Employee e[]){
  printf("Displaying the Data\n");
  for(int i=0;i<5;i++){
    printf("%d %s %f ",e[i].id,e[i].name,e[i].salary);
    printf("\n");
  }
}

