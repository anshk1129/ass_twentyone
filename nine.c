#include<stdio.h>
struct student {
int id;
char name[30];
};
struct student input();
void display(struct student s[],int n);

int main(){
struct student s[1000];
int n;
printf("Enter how many information of students you want to store\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
s[i]=input();
display(s,n);
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
void display(struct student s[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",s[i].id);
        printf("%s",s[i].name);
    }
}