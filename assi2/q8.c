#include<stdio.h>


void main(){


	int num;

	printf("enter your number:");

	scanf("%d",&num);

	switch(num){

		case 1:{
			       printf("monday\n");
		       }
		       break;
		case 2:{
			       printf("tuesday\n");
		       }
		       break;
	        case 3:{
			       printf("wednesday\n");
		       }
		       break;
                case 4:
		       {
			       printf("thursday\n");
		       }
		       break;
		case 5:{
			       printf("friday\n");
		       }
		       break;
		case 6:{
		               printf("saturday\n");
		       }
		       break;
	        case 7:{
		               printf("sunday\n");
		       }
	               break;
		default: {
	                       printf("no\n");
		}
                       break;
	}
}	
 		
	            
