#include <stdio.h>

int main () {
    //Practice questions 
    //1 Personal Inroduction
    // Take a name ,age, course, and city as input
    // print them in a property formatted information

     char Name[10];
     int age;
     char course[20];
     char city[15];

     printf("Enter Your Name: ");
     scanf(" %9s", &Name);

     printf("Enter Your age: ");
     scanf("%d",&age);

    printf("Enter Your Course: ");
     scanf("%19s",&course);

     printf("Enter Your City: ");
     scanf("%14s",&city);

     printf("-------------- FULL DETAILS-------------\n");

     printf("Name   :  %s\n",Name);
    printf("Age    :  %d\n",age);
     printf("Course :  %s\n",course);
     printf("City   :  %s\n",city);
    

    // 2 Two Numbers
    // Take two integers from the user 
    // print their sum
    
     int num1;
     int num2;
     int total= num1 + num2;

     printf("Enter first number: ");
     scanf(" %d",&num1);

     printf("Enter Second Number: ");
     scanf(" %d", &num2);


     printf("First Number: %d\n", num1);
     printf("Second Number: %d\n", num2);
     printf("Total: %d\n", total);

    //3 Basic Calculator
    // Take two numbers and print 
    // Addition 
    // Subtrattion
    // Multiplication
    // Division

    int number_1 = 100;
    int number_2 = 200;

    printf("Addition: %d\n",number_1 + number_2);
    printf("Subtraction: %d\n", number_1- number_2);
    printf("Multiplication: %d\n", number_1 *number_2);
    printf("Divison: %d\n",number_2/number_1);

    // 4 Rectangle 
    // Take length and width 
    // Calculate Area
    
    int length = 200;
    int width = 100;
    printf("The lenth of The Rectangle: %d\n", length);
    printf("The WIdth of The Rectangle: %d\n", width);
    printf("Area Of The rectangl: %d\n", length * width);
    
    // 5 Marks 
    // Take Marks of 3 Subjects 
    // Calculate total marks and average 

    float marks1, marks2 , marks3;
    float Total , Average;
    printf("Enter Your 1st Subject Marks: ");
    scanf("%f",&marks1);

    printf("Enter Your 2nd Subject Marks: ");
    scanf("%f",&marks2);

    printf("Enter Your 3rd Subject Marks: ");
    scanf("%f", &marks3);

    // Calculate the marks 
    Total = marks1 + marks2 + marks3;
    Average= Total /3;
    printf("First Subject Marks: %f\n",marks1);
    printf("Second Subject Marks: %f\n",marks2);
    printf("Third Subject Marks: %f\n",marks3);
    printf("Total Marks: %2f\n",Total);
    printf("Average: %2f\n", Average);

    return 0;
}

    
    
    




    

    









