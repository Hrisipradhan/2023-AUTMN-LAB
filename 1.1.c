/* Q1.1 Write a program to read two numbers and compare the numbers using function call by address.*/

#include<stdio.h>
void compare(int *a, int *b){
    if (*a>*b){
        printf("%d is greater than %d\n", *a,*b);
    }
    else if (*a<*b){
        printf("%d is smaller than %d\n", *a,*b);
    }
     
    else{
        printf("Both numbers are same");
    }

}

int main(int argc, char const *argv[])
{
    int a, b;
    
    printf("Enter the Two Numbers:\n");
    scanf("%d %d",&a,&b);

    compare(&a,&b);



    return 0;
}
