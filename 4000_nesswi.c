#include<stdio.h>

main()
{
	int choice,loan,balance,opening;
		printf("1 for loan eniqury = ");
		printf("\n2 for balance eniqury = ");
		printf("\n3 for opening account = ");
	    printf("\nEnter your choice = ");
	    scanf("%d",&choice);
	    switch(choice){
	    	case 1 :
	    		    printf("\n 1 for home loan");
	    		    printf("\n 2 for car loan");
	    			printf("\n 3 for personal loan");
	    			printf("\n Enter your loan choice = ");
	    			scanf("%d",&loan);
	    			switch(loan){
	    					case 1 :
	    		                    printf("Home Loan");
	    	                     	break;
						    case 2 :
	    		                    printf("Car Loan");
	    	                     	break;	
						    case 3 :
	    		                    printf("Personal Loan");
	    	                     	break;				 	
					            }
	    		break;
	    	case 2 :
	    		    printf("\n 1 for saving account");
	    		    printf("\n 2 for current account");
	    			printf("\n 3 for fixed deposit");
	    			printf("\n Enter your loan choice = ");
	    			scanf("%d",&balance);
	              	switch(balance){
	    					case 1 :
	    		                    printf("saving account balance");
	    	                     	break;
						    case 2 :
	    		                    printf("current account balance");
	    	                     	break;	
						    case 3 :
	    		                    printf("fixed deposit balance");
	    	                     	break;				 	
					            }
	    		break;	
	        case 3 :
	    		    printf("\n 1 for saving bank account");
	    		    printf("\n 2 for current bank account");
	    			printf("\n 3 for fixed deposit account");
	    			printf("\n Enter your account opening choice = ");
	    			scanf("%d",&opening);
	              	switch(opening){
	    					case 1 :
	    		                    printf("saving bank account");
	    	                     	break;
						    case 2 :
	    		                    printf("current bank account");
	    	                     	break;	
						    case 3 :
	    		                    printf("fixed deposit account");
	    	                     	break;				 	
					            }
	    		break;		
		}
	
	
}
