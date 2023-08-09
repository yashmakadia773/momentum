#include<stdio.h>

main()
{
		char ch;
		printf(" enter character ");
		scanf("%c",&ch);
		
		if(ch>='a' && ch<='z' || ch>='A' && ch<='z' ) 
		{
			printf( "alphabet");
			
		}
		else if(ch>='0' && ch<='9')
		{
			printf("digit");
			
		}
		else{
			printf("spiceal");
		}
		
		 
	
	
	
}