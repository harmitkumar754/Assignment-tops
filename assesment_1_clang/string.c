#include<stdio.h>
#include<string.h>
int main() 
{
 
    char  a[100], b[100],cho,ch;
    int  con,x=0,y=0,le=0,cou=0,nm=0,vow=0,cons=0,sp=0,dig=0;

    do
	{
		a[0] = '\0';
		b[0] = '\0';
		ch ='\0';
		con=0;
		le=0;
		x=0;
		y=0;
		le=0;
		cou=0;
		nm=0;
		vow = 0;
		cons = 0;
		sp = 0;
	    dig = 0;
		 
		
        printf("\nStringg Operations Menu:\n");
        printf("1. reverse a string\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of character in s string\n");
        printf("7. Find number of vowels and consonants\n");
        printf("8. Find number of blank spaces and digits \n");
        printf("9. Exit\n");
        printf("Enter your cho (1-9): ");
        
        scanf(" %c", &cho);
        
        switch (cho) 
		{
            case '1':
            	
                printf("Enter a string to reverse: ");
                gets(a);
                
                for(x=0; a[x]!='\0';x++) 
                {
                	le++;
                }
                printf("\n reverce string :");
                for(x=le;x>=0;x--)
                {
                	printf("%c",a[x]);
				}
				
            break;
    
           
            case '2':
            	
                printf("Enter the first string: ");
                gets(a);
                printf("Enter the second string: ");
                gets(b);
                strcat(a,b);
                printf("\n Concate String Is : %s",&a);
            
            break;
            
            case '3':
            	
            printf("\n Enter name :");
	        gets(a);
	        
			while(a[x]!='\0')	
				{
					le++;
					x++;
					
				}
			for(x=0;a[x]!='\0';x++)
				{
					b[x]=a[le-1];
					le--;
						
				}
			for(x=0;b[x]!='\0';x++)
				{
					printf("%c",b[x]);
				}
			for(x=0;a[x]!='\0';x++)
				{
					for(y=0;b[y]!='\0';y++)
						{
							if(a[y]!=b[y])
								{
									cou++;
								}
						}
				}
			if(cou==0)
				{
					printf("\n Palindrome");
				}
			else
				{
					printf("\n not palindrome");
				}
				
            break;
            
            case '4':
            	
                printf("\nEnter a string  1: ");
                gets(a);
                printf("\nEnter a string 2: ");
                gets(b);
                strcpy(a,b);
                printf("\n string 1 %s:",a);
                
            break;
            
            case '5':
            	
                printf("Enter a string to find its length: ");
                gets(a);
                for(x=0;a[x]!='\0';x++)
            		{
			      		nm++;
	            	}
            	printf("\n length  is : %d",nm);
                
                break;
                
            case '6':
                printf("Enter a string: ");
                gets(a);
                printf("Enter the character: ");
                scanf(" %c", &ch);
                 for (x = 0; a[x] != '\0'; x++) 
					{
        				if (a[x] == ch)
							{
           			 			le++;
        					}
   					}
             	printf("Frequency of '%c' = %d\n",ch,le);
                break;
                
            case '7':
               printf("Enter a string: ");
               gets(a);
               
                for (x = 0; a[x] != '\0'; x++)
					{
                  		int ch=a[x];
                   		if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90) 
				  		 { 
                  			if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) 
				  				{
                    				vow++;
                   				}    
                   			else if(ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85) 
				  				{
                    				vow++;
                   				}  	
				   			else 
				  				{
                    				 cons++;
                   				}
                  			}
                  		
                  			
              		}
                printf("Number of vowels: %d\n", vow);
                printf("Number of consonent: %d\n", cons);

                break;
                
            case '8':
                printf("Enter a string: ");
                gets(a);
                	for (x = 0; a[x] != '\0'; x++) 
						{
							int stt=a[x];
       						if (stt==32)
								{
           				 			sp++;
        						}
							else if (stt>=48 && stt<=57) 
								{
            						dig++;
        						}			
						}
   				 printf("Number of blank space: %d\n", sp);
   				 printf("Number of digits: %d\n", dig);

            break;
            
            case '9':
                printf("Exiting the program.\n");
                return 0;
            break;  
            
            default:
                printf("Invalid  choice.\n");
                
                
    }

        printf("\nDo you want to continue <<press 1 to conytinue>>");
        scanf("%d",&con);	
    } while (con==1);
    
}
