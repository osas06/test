#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int tpoz(int **mat,int row,int col,int i,int a);


int main()
{
    srand(time(NULL));
    
    int row=5,col=5;
    int **mat=(int **)malloc(row * sizeof(int *));
    for(int i=0;i<row;i++)
    {
        mat[i]=(int *)malloc(col * sizeof(int));
    }
    for(int i=0;i<row;i++)
    {
        for(int a=0;a<col;a++)
        {
            mat[i][a]=rand() %10;
            printf("%d  ",mat[i][a]);
        }
    printf("\n");

    }

    printf("\nAfter\n\n");
    tpoz(mat,row,col,0,0);
     for(int i=0;i<row;i++)
    {
        for(int a=0;a<col;a++)
        {
            printf("%d  ",mat[i][a]);
        }
    printf("\n");

    }

    free(**mat);
    for(int i=0;i<row;i++)
    {
        free(mat[i]);
    }
    
    return 0;
}

int tpoz(int **mat,int row,int col,int i,int a)
{
if(i==row)
{
    return 0;
}
else if(a==col)
{
tpoz(mat,row,col,i+1,i+1);
}
else
{
int temp;
temp=mat[i][a];
mat[i][a]=mat[a][i];
mat[a][i]=temp;
tpoz(mat,row,col,i,a+1);


}

 
}

