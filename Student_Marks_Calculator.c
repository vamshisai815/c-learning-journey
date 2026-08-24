//*Student Marks Calculator 
// In this program we have to take marks from the user along with some details like name , Roll no
// then we have calculate the Total, average, and Percentage of the marks and also atlast we have show a valuable formatted student report card

//! Program overflow

//1 variables for 
//A Student name 
//b Roll no
//c 5 Subjects Marks 
//d Total Marks 
//e Average
//f Percenatage

//2 input from the user

//3 Calculate:
//A) Total
//B) Average
//C) Percentage

//4 show the all details in the formated report card

#include <stdio.h>
int main()
{
    char name[20];
    int roll_no;
    float Sub1, Sub2, Sub3, Sub4, Sub5;

    printf("Enter Your Name:\n");
    scanf("%19s", name);

    printf("Enter Your Roll No:\n");
    scanf("%d",&roll_no);

    printf("Enter Your 1St Subject Marks:\n");
    scanf("%f",&Sub1);

    printf("Enter Your 2nd Subject Marks:\n");
    scanf("%f",&Sub2);

    printf("Enter Your 3rd Subject Marks:\n");
    scanf("%f",&Sub3);

    printf("Enter Your 4th Subject Marks:\n");
    scanf("%f",&Sub4);

    printf("Enter Your 5th Subject Marks:\n ");
    scanf("%f",&Sub5);

    float Total= Sub1 + Sub2 + Sub3 + Sub4 + Sub5 , Average= Total/5 ,  Percentage = (Total/500)*100;
    

    printf("---------------------------------- REPORT CARD ----------------------------------------------\n");
    printf("Name : %s\n",name);
    printf("Roll No: %d\n",roll_no);
    printf("Total Marks: %f\n",Total);
    printf("Average Marks: %f\n", Average);
    printf("Percentage: %f\n", Percentage);
    printf("---------------------------- Congrulations For Good Marks ------------------------------");

    return 0;
}
    

