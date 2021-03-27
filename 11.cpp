#include<stdio.h>
int main()
{int number;
printf("number=");scanf("%d",&number);
int last=number;
for(;last>9;){last /=10;}
printf("chu so dau tien cua %d la %d",number,last);
}

