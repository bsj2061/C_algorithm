#include <stdio.h>

int array[100];
int top;

void push(int x){
	if(isfull())
		return; 
	array[top] = x;
	top++;
}

void pop(void){
	if(isempty())
		return;
	printf("%d\n",array[--top]);
}

int isempty(void){
	if(top==0)
		return 1;
	else
		return 0;
}

int isfull(void){
	if(top==99)
		return 1;
	else
		return 0;
}

int Top(void){
	printf("%d\n",top);
}

int main(void){
	push(3);
	Top();
	push(7);
	pop();
	return 0;
}
