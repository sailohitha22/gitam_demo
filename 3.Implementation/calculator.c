#include <stdio.h>
int main(){
    int mum1,num2;
    int result;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    result = num1+num2;

    printf("Sum of %d amd %d is %d\n",num1,num2,result);
    return 0;
}