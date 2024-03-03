#include<stdio.h>

int cift(int *ar, int *sum, int size, int *counter);

int main()
 {
    int ar[] = {1, 5, 2, 5, 10};
    int size = sizeof ar / sizeof ar[0];
    int *ptr = ar;
    int sum=0;
    int counter=0;
    printf("basta counter %d\n",counter);
    cift(ptr, &sum, size, &counter);
    printf("sum of even numbers is %d\n", sum);
    printf("Son counter %d",counter);
    return 0;
}

int cift(int *ar, int *sum, int size, int *counter)
 {
    if (*counter < size ) {
        if (*ar % 2 == 0) {
            *sum += *ar;
        }
        (*counter)++;
        cift(ar + 1, sum, size, counter);
    } 
}
