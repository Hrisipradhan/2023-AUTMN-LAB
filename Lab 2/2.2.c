#include<stdio.h>
int main()
{
    int a=0;
    int matrix[30][30];
    int i, j;
    int n;
    printf("Enter size of square matrix:");
    scanf("%d",&n);

    printf("Enter elements fo the Matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            
            if (matrix[i][j]!=0){
                a++;
            }
            
        
        }
        printf("\n");
    }
    
    printf("Non zero elements %d",a);
    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if(i > j)
            printf(" ");
        else
        printf("%d" , matrix[i][j]);
        printf(" ");  
        }
        printf("\n");
    }



        
    

    return 0;
}
