/*#include<stdio.h>
struct Marks{
int roll_no;
char name[30];
float chem_marks,phy_marks,maths_marks;
};
struct Marks input();
void display(struct Marks s[]);

int main(){
struct Marks s[5];
for(int i=0;i<2;i++){
s[i]=input();
}
// display(s);
for(int i=0;i<2;i++){
    // per=((s[i].chem_marks+s[i].phy_marks+s[i].maths_marks))/300.0*100;
     float percentage = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)/300.0*100;
    printf("The percentage of student having roll no %d and name %s is %.2f \n",s[i].roll_no,s[i].name,percentage);
}
return 0;
}

void display(struct Marks marks[]){

}
struct Marks input(){
    struct Marks s1;
        printf("Enter roll no. :\n");
        scanf("%d",&s1.roll_no);
        fflush(stdin);
        printf("Enter name :\n");
        fgets(s1.name,30,stdin);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &s1.chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &s1.maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &s1.phy_marks);
}*/
#include <stdio.h>

//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

//main function
int main() {
	
    struct Marks marks[5];
    
    //Getting user input for info of the 5 students
    for(int i=0; i<4; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%f", &marks[i].phy_marks);
    }
    
    // Calculating and printing percentage for each student
	for(int i=0; i<4; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}