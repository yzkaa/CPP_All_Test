#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//组合去重排序

int getRands(int Ints[]) {
    int i =0;
    int num = rand()%10+1;
    for(; i<num; i++) {
        Ints[i]=rand()%10;
        printf("%d\t",Ints[i]);
    }
    printf("the end\n");
    return num;
}
void printfun(int c[],int num1,int d[],int num2) {
    int a = 0;

    while(a<num1) {
        printf("%d\t",c[a]);
        a++;
    }

    a = 0;
    while(a<num2) {
        printf("%d\t",d[a]);
        a++;
    }
}

void unRepeat(int c[],int num1,int d[],int num2) { //每个参数的意思（数组一，数组一的长度，数组二，数组二的长度）
    int n=0,m=0,k=0,a[20],max=0,h,t[20];
    for(; n<num1; k++)
    {   a[k]=c[n];
        t[k]=a[k];
        n++;

    }
    for(n=0; n<(num2); k++)
    {   a[k]=d[n];
        t[k]=a[k];
        n++;

    }
    h=k;

    for(n=0; n<h; n++)
    {
        for(m=0; m<h; m++)
            if(t[n]==a[m]&&n!=m)
            {
                t[n]=-1;
            }
    }

    for(k=0,n=0; n<h; n++)
        if(t[n]!=-1)
        {   a[k]=t[n];
            k++;

        }

    for(n=0; n<k; n++)
        for(m=0; m<k; m++)
            if(a[m]<a[m+1])
            {
                max=a[m+1];
                a[m+1]=a[m];
                a[m]=max;
            }
    for(n=0; n<k; n++)
        printf("%d\t",a[n]);
}
int main()
{
    srand((unsigned)time(NULL));
    int i=0;
    int c[10];
    int d[10];
    printf("随机生成的第一组数组：\n");
    int num1=getRands(c);
    printf("随机生成的第二组数组: \n");
    int num2=getRands(d);
    printf("处理之前：\n");
    printfun(c,num1,d,num2);
    printf("\n");
    printf("处理之后：\n");
    unRepeat(c,num1,d,num2);
    return 0;
}
