#include<stdio.h>
#include<stdlib.h>
struct time caldef(struct time t1,struct time t2);
struct time{
int hour,min,sec;
};

int main(){
struct time t1,t2,t3;
printf("Enter the  two time period(hh/mm/sec)\n");
scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
t3=caldef(t1,t2);
printf("%d:%d:%d",t3.hour,t3.min,t3.sec);
return 0;
}
struct time caldef(struct time t1,struct time t2){
struct time t3;
t3.hour=abs(t1.hour-t2.hour);
t3.min=abs(t1.min-t2.min);
t3.sec=abs(t1.sec-t2.sec);
return t3;
}