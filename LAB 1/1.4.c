//Q4 Write a menu driven program to create a structure to represent
// complex number and perform the following operation using
// function :
// 1. addition of two complex number (call by value)
// 2. multiplication of two complex number (call by address


#include<stdio.h>
typedef struct COMPLEX{
    int a;
    int b;
}Complex;
Complex multiply(Complex *x, Complex *y,Complex *z);
Complex add(Complex, Complex);
int main()
{
    int a1, b1, a2, b2;
    int m;
    Complex x, y, z;
    printf("Enter first complex number : ");
    scanf("%d %d", &a1, &b1);
    printf("\nEnter second complex number : ");
    scanf("%d %d", &a2, &b2);
    x.a = a1;
    x.b = b1;
    y.a = a2; 
    y.b = b2;
    
    
    printf("MENU\n1.Additon\n2.Multiplication\n");
    printf("\nEnter your choice :");
    scanf("%d",&m);

    
    
    if (m==1){
        z = add(x,y);
        printf("\nAfter addition: %d+%di", z.a, z.b);
    }
    else if(m==2){
        multiply(&x, &y,&z);
        printf("\nAfter multiplication: %d+%di", z.a, z.b);
    }
    else{
        printf("\nInvalid input!!!");
    }
        
    



    return 0;
}
Complex multiply(Complex *x, Complex *y,Complex *z){
    
    z->a = (x->a * y->a) - (x->b * y->b);
    z->b = (x->a * y->b) + (x->b * y->a);
    // return *z;
    }
Complex add(Complex x, Complex y){
    Complex z;
    z.a=x.a+y.a;
    z.b=x.b+y.b;
    return z;

}
