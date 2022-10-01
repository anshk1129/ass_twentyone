#include<stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};
void display( struct employee );

int main(){
struct employee b1={1,"java",122.3};
display(b1);
return 0;
}
void display( struct employee b1){
    printf("%d %s %f",b1.id,b1.name,b1.salary);
}