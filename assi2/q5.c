#include<stdio.h>

void main(){


         char ch;

	 printf("enter your character:");

	 scanf("%c",&ch);

	 if(ch>=65 && ch<=90){

		 printf("uppercase:\n");
	
	 }else if(ch>=90&&ch<=122){

		 printf("lowercase:\n");
	 }else{

		 printf("not a charachter");
	 }
}
	
