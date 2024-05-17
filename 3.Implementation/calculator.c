#include <stdio.h>
int division(int main(int num1,int num2))
{
    int result = 0;
    if(num2 != 0)
    {
        result = num1/num2;
    }
    return result;
}
int main(){
    int num1,num2;
    int result;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num23);

    result = num1/num2;

    printf("Division of %d %d and %d is %d\n",num1,num2,result);
    return 0;
}