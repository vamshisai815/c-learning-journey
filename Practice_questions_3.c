// This is the practice question of typecasting 
#include <stdio.h>

int main () 
{
    //question1 shopping calculation 
    // A product costs 199 and you buy 3. You store the quantity as an integer and price as a floaoting point number 


    int quantity= 3;
    int price = 199;
    
    float cost= quantity*price;

    printf("the total cost of the items is %.2f\n",cost);

    // questions 2 Average Marks
    // A student gets marks of 78,65,82,91 and 74 if all marks are integers but you want the average include decimals. where would you need type casting

    int m1=78,m2=65,m3=82,m4=91,m5=74;
    int Total = m1+m2+m3+m4+m5;
    float average = Total/5;
    printf("%f\n",average);
    return 0;
}