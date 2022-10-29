#include<stdio.h>

int square(int a);

int main()
{
    int num;
    printf("Enter the number whose is to be calculated -:");
    scanf("%d",&num);
    printf("The square of %d is -:%d",num,square(num));
    return 0;
}

int square(int a){
    return a*a;
}