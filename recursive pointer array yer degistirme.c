#include <stdio.h>


void yerdegis(int ar[],int size) // NORMAL 
{
int fsize=size-1;
int temp;
    for(int i=0;i<size/2;i++)
    {
        temp=ar[fsize];
        ar[fsize]=ar[i];
        ar[i]=temp;
        fsize--;


    }
}

int yerdegis2(int ar[],int size,int temp) // Recursive
{

if(size<0)
{
    return 0;
}
if(temp<size/2)
{
int a=ar[size-1];
ar[size-1]=ar[temp];
ar[temp]=a;
return yerdegis2(ar,size-1,temp+1);
}

}

int yerdegis3(int *ptr,int size,int temp) // pointer
{

if(size<0)
{
    return 0;
}
if(temp<size/2)
{
int a=*(ptr+temp);
*(ptr+temp)=*(ptr+size-1);
*(ptr+size-1)=a;
yerdegis3(ptr,size-1,temp+1);
}

}






int main() {

    int ar[]={1,2,3,4,5};
    int size=sizeof ar/ sizeof ar[1];
    int *ptr=&ar;

   for(int i=0;i<size;i++)
{

    printf("ONCE %d \n",ar[i]);
}

yerdegis3(ptr,size,0);
for(int i=0;i<size;i++)
{

    printf("SONRA %d \n",ar[i]);
}
    


    return 0;
}
