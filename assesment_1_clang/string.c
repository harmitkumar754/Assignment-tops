#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
 
       char  a[100], b[100],choice,ch;
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
		 
		
        printf("\nString Operations Menu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is a palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of a string\n");
        printf("6. Find the frequency of a character in a string\n");
        printf("7. Find the number of vowels and consonet in a string\n");
        printf("8. Find the number of blank space and digits in a string\n");
        printf("9. Exit\n");

        printf("Enter your choice (1-9): ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter a string to reverse: ");
                scanf(" %[^\n]s", a);
                
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
                scanf(" %[^\n]s", a);
                printf("Enter the second string: ");
                scanf(" %[^\n]s", b);
                strcat(a,b);
                printf("\n Concate String Is : %s",&a);
                break;
            case '3':
             	printf("\n Enter name :");
	            scanf("%s",&a);
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
	if(cou!=0)
	{
		printf("\n Not Palindrome");
		
	}
	else
	{
		printf("\n palindrome");
	}
	
                break;
            case '4':
                printf("\nEnter a string  1: ");
                scanf(" %[^\n]s", a);
                printf("\nEnter a string 2: ");
                scanf(" %[^\n]s", b);
                strcpy(a,b);
                printf("\n string 1 %s:",a);
                
                //code
                break;
            case '5':
                printf("Enter a string to find its length: ");
                scanf(" %[^\n]s", a);
               // printf("Enter nm : ");
	           // scanf(" %s",&nm);

	for(x=0;a[x]!='\0';x++)
	{
		
		nm++;
	}
	printf("\n le  is : %d",nm);
                //code
                break;
            case '6':
                printf("Enter a string: ");
                scanf(" %[^\n]s", a);
                printf("Enter the character to find its frequency: ");
                scanf(" %c", &ch);
                 for (x = 0; a[x] != '\0'; x++) 
				 {
        			if (a[x] == ch)
					 {
           			 le++;
        			}
   				 }

             printf("Frequency of '%c' = %d\n",ch,le);
               //code
                break;
            case '7':
               printf("Enter a string: ");
               scanf(" %[^\n]s", a);

                for (x = 0; a[x] != '\0'; x++)
				{
                  char ch = tolower(a[x]); 
                   if (ch >= 'a' && ch <= 'z') 
				   { 
                   if (ch == 'a' || ch == 'e' || ch == 'x' || ch == 'o' || ch == 'u') 
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
    
                //code
                break;
            case '8':
                printf("Enter a string: ");
                scanf(" %[^\n]s", a);
                for (x = 0; a[x] != '\0'; x++) 
				{
       				 if (isspace(a[x]))
						{
           				 	sp++;
        				}
					 else if (isdigit(a[x])) 
						{
            				dig++;
        				}
   				}				

    printf("Number of blank space: %d\n", sp);
    printf("Number of digits: %d\n", dig);

                //code
                break;
            case '9':
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to continue <<press 1 to conytinue>>");
        scanf("%d",&con);
    } while (con==1);
    
}

