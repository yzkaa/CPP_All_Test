#include<stdio.h>
float matrix[3][3];
int main()
{
void insert(),check();
int i=0,j=0;
insert();
check();
printf("输出矩阵:");
for(;i<3;i++)
{printf("\n");
for(j=0;j<3;j++)
printf("%4.2f\t",matrix[i][j]);}
}

void insert()
{
int i=0,j=0;
printf("输入矩阵的元素:");
for(;i<3;i++)
for(j=0;j<3;j++)
scanf("%f",&matrix[i][j]);//输入矩阵的元素
}

void check()
{
int i=0,j=0,k=0;
for(;i<3;i++)
for(j=0;j<3;j++)
{k=(int)(matrix[i][j]*100);
if(k==314)//判断元素的值是否为3.14
printf("等于3.14的行号:%d,列号:%d\n",i+1,j+1);}
}
    
