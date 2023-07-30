#include <stdio.h>
#include <stdlib.h>

int main()
{

    int marks[10];
    int total= 0;
    float average;
    int i;

    for (i=0;i<10;i++)
        {
        printf("Enter mark %d: ", i + 1);
        scanf("%d",&marks[i]);
        total+=marks[i];
        }

    average=(float)total/ 10;


    printf("Total marks:%d\n",total);
    printf("Average marks:%.2f\n", average);


    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
           }
}

