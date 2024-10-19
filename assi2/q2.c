#include<stdio.h>


void main(){


	int num;

	printf("enter your number\n:");

	scanf("%d",&num);

	if(num%5==0 || num%10==0){

		printf("number is divisible\n");

	}else{
		printf("number is not divisible\n");
	}

}
