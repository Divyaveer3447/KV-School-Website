#include<stdio.h>
void main()
{
    int num=0;
    printf("\n\tHello Veer! Enter a number = ");
    scanf("%d", &num);
    printf("\n\n");
    for (int i = 1; i < 11; i++)
    {
        printf("\t\t%d X %d = %d \n", num, i, num*i);
    }
    printf("\n\n");
}