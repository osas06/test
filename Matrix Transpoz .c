#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define row 5
#define col 5

void tpoz(int mat[row][col]);

int main()
{
srand(time(NULL));

int mat[row][col];
int counter=0;
for(int i=0;i<row;i++)
{

    for(int a=0;a<col;a++)
    {

        mat[i][a]=rand() %10;
        printf("%d  ",mat[i][a]);

    }
    printf("\n");
}

tpoz(mat);


printf("\nTranspozed matris\n");


for(int i=0;i<row;i++)
{

    for(int a=0;a<col;a++)
    {

        
        printf("%d  ",mat[i][a]);

    }
    printf("\n");
}



    return 0;
}


void tpoz(int mat[row][col])
{


int temp=0;

for(int i=0;i<row;i++)
 {

    for(int a=i+1;a<col;a++)
    {
        temp=mat[i][a];
        mat[i][a]=mat[a][i];
        mat[a][i]=temp;
        

    }


  }



}

