#include<stdio.h>
int main()
{
int number;
printf("Enter an integer");
scanf("%d",&number);
if(number %2==0)
printf("%d is a even",number);
else
printf("%d is a odd",number);
return 0;
}
