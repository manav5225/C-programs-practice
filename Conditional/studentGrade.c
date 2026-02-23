//=============================================student marks sheet else if grade A B C======================================
#include<stdio.h>
int main(){
    int rollNO;
    char sname[10];
    int sub1,sub2,sub3,total;
    float perct;
    char grade;
    printf("Enter ROll No of Student :\n");
    scanf("%d",&rollNO);
    printf("Enter Student Name :\n");
    scanf("%s",sname);
    printf("Enter Marks of Subject 1:\n ");
    scanf("%d",&sub1);
    printf("Enter Marks of Subject 2:\n ");
    scanf("%d",&sub2);
    printf("Enter Marks of Subject 3: \n");
    scanf("%d",&sub3);
    
    total=sub1+sub2+sub3;
    perct=((float)total/300)*100;
    if(perct>=85){
        grade='A';
    }
    else if(perct>=70){
        grade='B';
    }
    else if(perct>=50){
        grade='C';
    }
    else if(perct>=35){
        grade='D';
    }
    else{
        grade='F';
    }

    printf("Total Marks of Students is :%d\n",total);
    printf("Student grade is %s\n",grade);
    printf("Percentage of Student is %f\n",perct);
    printf("Student Roll No is : %d\n",rollNO);
    printf("Student Name is : %s\n",sname);

    return 0;

}
