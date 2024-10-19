

#include<stdio.h>



void main(){

	int num1;

	int num2;

	int num3;

	printf("enter first side of triangle:");

	scanf("%d",&num1);

	printf("enter second side of triangle:");

	scanf("%d",&num2);

	printf("enter third side of triangle:");

	scanf("%d",&num3);

	int sum = num1 + num2 + num3;

	if(sum == 180){

		printf("it is a valid triangle");

	}else{

		printf("not a valid triangle");

	}
}


