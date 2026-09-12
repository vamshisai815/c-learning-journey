#include <stdio.h>
int main()
{
    // Write a program to print hello world 
    printf("Hello,World\n");

  //Write a program to input two numbers and calculate:

//   Addition
//   Subtraction
//   Multiplication
//   Division
//   Remainder

    int num1,num2;
    int result1, result2 , result3, result4, result5;

    printf("Enter Your First Number\n: "); 
    scanf("%d",&num1);

    printf("Enter Your Second Number\n: ");
    scanf("%d",&num2);
    
    result1 = num1 + num2;
    result2 = num1 - num2;
    result3 = num1 * num2;
    result4 = num1 / num2;
    result5 = num1%num2;


    printf("Addition: %d\n ",result1);
    printf("Subtraction:%d\n",result2);
    printf("Multiplication: %d\n",result3);
    printf("Division:%d\n",result4);
    printf("Remainder:%d\n",result5);

    // Write a c program to input the radius of a circle and calculate and display its area

    int r1;
    float pie1= 3.14, area;
    
    printf("Enter Radius: ");
    scanf("%d",&r1);

    area= pie1*r1*r1;

    printf("Area of circle: %.2f\n",area);
    

// Write a c program to input the radius of a circle and calcualate and display its circumference 

    int r2;
    float pie2 = 3.14, circumference;

    printf("Enter Radius: ");
    scanf("%d",&r2);

    circumference= 2*pie2*r2;

    printf("Circumference of a circle: %.2f\n", circumference);

// Write a c program 





    





    return 0;
}
