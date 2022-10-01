#include<stdio.h>
#include<string.h>
struct Employee{
int id;
char name[20];
float salary;
};
struct Employee input();
void display(struct Employee e[]);
void sort_by_name(struct Employee e[]);
int main(){
struct Employee b[5];
for(int i=0;i<5;i++){
  b[i]=input();
}
sort_by_name(b);
display(b);
return 0;
}
void sort_by_name(struct Employee e[]){
 int i,j;
    struct Employee swap;
    int n=5;
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(strcmp(e[j].name,e[j+1].name)>0) 
{
swap=e[j];
e[j]=e[j+1];
e[j+1]=swap;
}
}
} 
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
  printf("Displaying the Data By sorting namewise\n");
  for(int i=0;i<5;i++){
    printf("%d %s %f ",e[i].id,e[i].name,e[i].salary);
    printf("\n");
  }
}

