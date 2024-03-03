#include<stdio.h>



int finder(int *ar,int max,int size,int counter)
{
if(counter<size)
{
if(max<*ar)
{
    max=*ar;
   
    finder(ar+1,max,size,counter+1);
}
else
{
    finder(ar+1,max,size,counter+1);
    
}


}
else
{
    return max;
}

}







int main()
{
int ar[]={6,3,6,2,6,8,2,6,1,23,1,234,5,73,4,76,3,5};
int size=sizeof ar / sizeof ar[1];
int *ptr=&ar;
//int max=finder(ptr);
//printf("max is %d",max);
int max=finder(ptr,ar[0],size,0);
printf("max is %d aaaa",max);

    return 0;
}