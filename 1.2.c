#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int* ptr;
    int sum=0;
    int i;

    printf("Enter the size of array :");
    scanf("%d",&n);
    //int a[n];

    ptr = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        printf("Enter element %02d: ",i+1);
        scanf("%d", (ptr + i));
    }

    printf("\nArray element:\n");
    for(i=0;i<n;i++){
        printf(" %d ",*(ptr + i));
        sum=*(ptr+i)+sum;
        
    }
    printf("\nSum = %d\n",sum);


    return 0;
}
