//6Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char c;
	printf("Enter Character : ");
	scanf(" %c",&c);
	if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
	{
		printf("You Entered Character %c is Vowel...",c);
	}
	else if((c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
	{
		printf("You Entered Character %c is Vowel...",c);
	}
	else
	{
		printf("You Entered Character %c is consonant...",c);
	}
	return 0;
	
}
/*
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

*/
