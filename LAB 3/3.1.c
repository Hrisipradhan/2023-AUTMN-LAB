#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,c;
    int a[100][100];
    int b[100][100];
    printf("Enter size of sparse Matrix:");
    scanf("%d %d",&r,&c);
    
    printf("Enter the elements :");

    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            //printf("\nEnter the element of matrix[%d,%d] :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Element of Matrix:\n");
    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //printf("Element of Matrix:\n");
    for (int i=0; i < r; i++) {
        for (int j = 0; j < c; j++ ) {
            // printf("%d\t",a[i][j]);
            b[j][i]=a[i][j];

        }
    }
    printf("Element of Trans Matrix:\n");
    for (int i=0; i < c; i++) {
        for (int j = 0; j < r; j++ ) {
            printf("%d\t",b[i][j]);
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
    printf("\nsparse matrix in 3-tuple format\n");
    for (int i=0; i < c; i++) {
        for (int j = 0; j < r; j++ ) {
            if (b[i][j]!=0)
            {
                printf("%d %d %d\t",i,j,b[i][j]);
                printf("\n");
            }
        }
        
    }

    return 0;
}
