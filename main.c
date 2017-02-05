#include<stdio.h>
#include<stdlib.h>

unsigned long int fibTail(int,unsigned int,unsigned int);
int main(){
	int number;
	printf("Please enter a number to find at Fibonacci Sequence: ");
	scanf("%d",&number);
	printf("Fibonacci Sequence's %d. number is: %ld\n",number,fibTail(number,1,0));
}
unsigned long int fibTail(int n,unsigned int current_value,unsigned int last_value){
	if(n==0){
		return last_value;
	}
	else if(n==1){
		return current_value;
	}
	else{
		return fibTail(n-1,(current_value+last_value),current_value);
	}
}
