#include<stdio.h>



int back(char ptr[],int start,int end);

int main()
{
    char str[100];
    scanf("%s",str);
    int size=0;
    
    while(str[size]!='\0')
    {
        size++;
    }

    printf("Before %s\n",str);
    
    back(str,0,size-1);
    
    printf("After %s",str);

    return 0;
}


int back (char ptr[],int start,int end)
{
if (start >= end) {
        return 0; 
    }
char temp = ptr[start];
    ptr[start] = ptr[end];
    ptr[end] = temp;
    
back(ptr,start+1,end-1);


}