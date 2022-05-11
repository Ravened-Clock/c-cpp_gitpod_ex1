#include<stdio.h>
#include<math.h>

int main (void) {
    
    long double radius;
    
    printf(" Please input the radius \n");
    scanf("%Lf",&radius);
    printf("\n\n");
    
    
    printf(" The area of the circle = %.50Lf\n\n",radius*radius*M_PI);


    printf(" And the circumference of the circle = %.50Lf\n\n",2*radius*M_PI);
    
    
    return 0;
}
