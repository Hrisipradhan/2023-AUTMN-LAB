#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=0;
    int matrix[3][3] = { {1, 0, 2}, {3, 6, 8}, {3, 6, 8} };
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", matrix[i][j]);
            
            if (matrix[i][j]!=0){
                a++;
            }
            
        
        }
        printf("\n");
    }
    
    printf("Non zero elements %d",a);
    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        if(i > j)
            printf("0");
        else
        printf("%d" , matrix[i][j]);
        printf(" ");  
        }
        printf("\n");
    }



        
    

    return 0;
}
