#include<stdio.h>
struct student {
int id;
char name[30];
};
struct student input();
void display(struct student s[]);
int main(){
struct student s[10];
for(int i=0;i<10;i++)
s[i]=input();
display(s);
return 0;
}
struct student input(){
 struct student s;
 printf("Enter the id and name of student\n");
 scanf("%d",&s.id);
 fflush(stdin);
 fgets(s.name,30,stdin);
 return s;
}
void display(struct student s[]){
    for(int i=0;i<10;i++){
        printf("%d ",s[i].id);
        printf("%s",s[i].name);
    }
}