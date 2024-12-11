#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100

int stack[MAX];
int top=-1;
int MAX=100;
 
bool isEmpty(){
	if(top<=-1){
		return 1;
	}
	else{
	 	return 0:
	 }
	}

bool isFull(){
	if(top=MAX){
		return 1;
	}	
	else{
		return 0;
		}
	}
void push(){
	int value;
	if(isFull()){
		printf("stack is full\n");
	}
	else{
		print("enter push item:");
		scanf("%d",&value);
		top=top+1;
		stack[top]=value;
		printf("\n%d pushed to stack ",value);
	}
}
void pop(){
	if(isEmpty()){
		print("stack is emoty");
		}
		else{
			print("%d is poped out:",stack[top]);
			top=top-1;
			}
		}
void display(){
	int i;
	if(!isEmpt()){
	for(i=0;i<=top;i++){
		printf("stack[%d]=\n",i+1,stack[i]);
		}
		}
		else{
			printf("top element is: %d",stack[top]);
			}
			else{
				printf("stack is empty");
				}
			}

void peek(){
	if(!isEmpty(){
				 	  
