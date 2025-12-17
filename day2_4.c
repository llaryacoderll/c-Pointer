//%*c
#include<stdio.h>
int main(){
    int num1 , num2;
    char ch1;

    printf("enter the values of num1 , num2 : \n");
    scanf("%d%d",&num1,&num2);

    printf("enter the value of ch1 : \n");
    scanf("%*c%c",&ch1);

    printf("num1 = %d  num2 = %d \n", num1, num2);
    printf("ch1 =%d  ch1 = %c\n",ch1,ch1);

    return 0;
}