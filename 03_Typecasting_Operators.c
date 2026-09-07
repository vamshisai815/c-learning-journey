// Implicit type casting 

#include <stdio.h>
int main()
{

    int M =3;
    int N = 5;

    float result = M+N;

    printf("The value of the the Variable result is %f\n",result);
    // Explicit typecasting 

    int a = 6;
    int b =4;
    float result2 = (float)a/b;
    printf("The value of the variable result is :%f\n",result2);

    // Example

    int i = 10;
    float j  = 2.5;

   float result3 = (int)i +(int)j;

    printf("The value of the result is %f\n", result3);

    
    return 0;
}


