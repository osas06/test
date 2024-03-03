#include<stdio.h>

void zort(int ar[],int size);


int main()
{
    int ar[]={1,4,9,7,67,6,8,1,5,465,123,1,4,5,21,614,4,5};
    int size=sizeof ar / sizeof ar[1];
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }
    
    printf("\nafter\n");
    zort(ar,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }



    return 0;
}

void zort(int ar[],int size)
{
int temp=0;
for(int i=0;i<size-1;i++)
{

        for(int a=0;a<size-1;a++)
        {
            if(ar[a]>ar[a+1])
            {
                temp=ar[a];
                ar[a]=ar[a+1];
                ar[a+1]=temp;

            }



        }


}

}