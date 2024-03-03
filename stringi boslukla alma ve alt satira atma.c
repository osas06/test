#include<stdio.h>

//32 değeri ASCII de boşluktur

int main()
{
    char sen[25]="";
   
    scanf("%[^\n]", sen); // cümle içerisindeki boşlukları da dahil eder
    for(int i=0;i<25;i++)
    {
        if(sen[i]==32)
        {
            printf("\n");
        }
        printf("%c",sen[i]);

    }
    return 0;
}