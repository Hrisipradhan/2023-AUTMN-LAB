#include<stdio.h>
int main()
{
    int r,c;
    int a[10][20];
    printf("Enter size of sparse Matrix:");
    scanf("%d %d",&r,&c);
    
    printf("       Enter the element     ");

    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            printf("\nEnter the element of matrix[%d,%d] :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsparse matrix in 3-tuple format\n");
    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            if (a[i][j]!=0)
            {
                printf("%d %d %d\t",i,j,a[i][j]);
                printf("\n");
            }
        }
        
    }


    return 0;
}
