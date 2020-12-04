#ifndef _STACK_H_
#define _STACK_H_
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef char DataType;
 
//采用链式栈 
struct node{
    DataType element;  //数据元素 
	struct node *next; //指向下一个数据元素的指针 
};

typedef struct node *PtrToNode;
typedef PtrToNode Stack;
 
/*
   函数名：isEmpty 
   函数功能：判定栈是否为空 
   函数参数：栈头结点指针 
   返回值：若栈为空，则返回1，否则返回0
*/
int isEmpty(Stack s) 
{
    return  s->next ==NULL;
}

/*
   函数名：createStack 
   函数功能：创建一个空栈，实际上只需要初始化栈头结点 
   函数参数：无 
   返回值：栈头结点指针 
*/
Stack createStack(void)  
{
	Stack s ;
	s =new struct node;
	s->next = NULL;
	s->element =0;
	return s;
}

/*
   函数名：push 
   函数功能：向栈中压人一个数据元素值为x 
   函数参数：待压栈的数据元素，栈头结点指针 
   返回值：无
*/
void push(DataType  x,Stack s) 
{
	//表头作为栈顶
    PtrToNode temp ;
 	temp=new struct node;
 	temp->element = x;
 	temp->next = s->next;
 	s->next = temp;
}

/*
   函数名：pop 
   函数功能：弹出栈顶元素并返回元素值 
   函数参数：栈头结点指针 
   返回值：栈顶元素的值 
*/
DataType pop(Stack s) 
{
	PtrToNode temp;
	int t;
	if(isEmpty(s)==0)
  	{
  		temp = s->next;
  		t = temp->element;
  		s->next = temp->next;
  		free(temp);
 		 return t;
 	}
}

DataType top(Stack s) 
{
	if(isEmpty(s)==0)
  	{
    	return s->next->element ;
  	}
}

/*
   函数名：inToPost
   函数功能：将中缀表达式转换为后缀表达式输出 
   函数参数：中缀表达式，放在字符数组中 
   返回值：无 
*/
void inToPost(char *expression)
{
   //在此处填写代码，完成中缀表达式转换为后缀表达式并输出
   /**********  Begin  **********/
   int i=0;
   bool isNum=true;
   bool bracket=false;
   Stack str = createStack();
   while(expression[i]!=0){
	   if(isdigit(expression[i])){
		   
		   if(!isNum){
			   cout<<" ";
		   }		   
		   cout<<expression[i];
		   isNum=true;
	   }else{
		   
		   if(expression[i]==')'){
			   while(top(str)!='('){
				   isNum=false;
				   cout<<" "<<pop(str);
			   }
			   pop(str);
			   bracket=false;
		   }else if(expression[i]=='+'||expression[i]=='-'){
					if(top(str)=='*'||top(str)=='/'){
						while(isEmpty(str)==0){
							isNum=false;
							cout<<" "<<pop(str);   
						}
						push(expression[i],str);
					}
					else
					{
						push(expression[i],str);
					}
					
		   		}
			else {
				push(expression[i],str);
			}
		}
		i++;

	}
	while(isEmpty(str)==0){

		cout<<" "<<pop(str);
	}  
   /**********  End  **********/
}
#endif

//#include "stack_symbol.h"

int main(void)
{
	char express[80];
	cin>>express;
	inToPost(express);
}
