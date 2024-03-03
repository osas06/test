#include<stdio.h>
#include<string.h>



    typedef struct okul{       // typedef sayesinde aşağıya yazdığım students kısmını doğrudan main kodda kullanarak object tanımlayabilirim yani struct okul st1 yerine students st1

    //char *name gibi pointer tarzı kullanıldığında mainde de olsa structta da olsa malloc kullanıp bellek ayır sonrasında işin bitince free(bellek_ayırdığımız_şey) ile bırak mesela st.name=malloc(100*sizeof(char)); iş bitince de free(st.name);
    char name[50]; // bunun yerine char *name kullanıp main fonksiyonda değişiklik için st.name="ali" şeklinde de kullanabiliriz fakat pointer şeklinde tanımlarken malloc kullanmak gerekir malloc için de stdlib gerekir ve bellek en son free() ile serbest bırakılmalıdır.
    int id;
    int mark;



}students;                 //typedef kullandık ve en sona students dedik bu sayede struct okul yerine students kullanabiliriz

void fill(students *ptr);
void read(students st);



/*
main fonksiyona bunu koyduğumuz zaman en son ad memberi hello yapıldığından içerideki her şey hello olmaya çalışır o yüzden genelde 1 member için union kullanılır.
union user p1;
p1.score=50;
scanf("%d",&p1.id);
strcpy(p1.ad,"hello");
printf("%d %d %s",p1.score,p1.id,p1.ad);
*/
union user // struct'dan farkı : içerisine sadece 1 şey tanımlanır. Eğer birden fazla tanımlanmış member varsa en son girilen union member değeri (mesela score=3) içerideki her şeyin değeri olur.
{

    int score;
    int id;
    char ad[50];
};


enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
//typedef enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday}days; şeklinde typedef yapıp enum week tuesday yerine days tuesday kullanabilirdik


int main()
{
    
    students st; // typedef olmasaydı -->   struct okul st; 
    /*
    bir object için değerleri tek seferde de girebiliriz örneğin :
    students st={"ali",230,65};
    */
   // fill(&st);
   // read(st);
    printf("\n******************************\n");
    enum week today=tuesday; // typedef kullansaydık days today=tuesday diyebilirdik
    printf("today's value is %d",today);

    return 0;
}

void fill(students *ptr)
{
    scanf("%[^\n]%*c",ptr->name); // bu da kullanılabilir fgets(ptr->name,50,stdin);
    scanf("%d %d",&ptr->id,&ptr->mark);
}
void read(students st)
{

    printf("studen name %s\nstudent id %d\nstudent mark %d",st.name,st.id,st.mark);


}