#include <stdio.h>

int main()
{
    // This is the practice set which i will follow from the Codewithharry

    // 1 Write a c program to calculate area of rectangle 
    //a) using hard coded inputs
    //b) using input supplied by the user

    // int length ,width;
    
    // printf("Enter The length 0f the rectangle\n: ");
    // scanf("%d",&length);

    // printf("Enter The Width of the rectangle\n: ");
    // scanf("%d", &width);

    // printf("Length of the Rectangle: %d\n",length);
    // printf("WIdth of the Rectangle:%d\n", width);
    // printf("Area of the Rectangle : %d\n", length*width);


    //2 Calculate the area of a circle and modify the same program to calcualte the volume of a cylinder given its radius and height 
    
    int radius = 23, height = 34;
    float Pi1 = (3.14*radius*radius), Pi2 = (3.14*radius*radius)*height;

    printf("Area of the circle in the Radius of %d is %f\n",radius,Pi1);
    printf("Volume of the cylinder in the radius %d and the Height %d is %f\n",radius,height,Pi2);
    
    //3 Write a program to convert celsius (Centigrade) temperature to fahreheit

    //4 Write a program to calculate simple interest for a set of values representing principal number of years, princial, years, and rate of interest 

    float P = 34.9, T= 5, R=9;
    float Interest = (P*T*R)/100;
    printf("The Value of Simple interest are %f\n",Interest);
    return 0;
}





    
    


