/*8WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include <stdio.h>  
void main()
{
    float PerHeight;   

    printf("Input the height of the person (in centimetres) :");   
    scanf("%f", &PerHeight);   

    if (PerHeight < 150.0)   
        printf("The person is Very short length(Dwarf). \n");   
    else if ((PerHeight >= 150.0) && (PerHeight < 165.0))   
        printf("The person is  average heighted. \n");   
    else if ((PerHeight >= 165.0) && (PerHeight <= 195.0))   
        printf("The person is high(taller). \n");   
    else
        printf("Very high length(Abnormal height).\n");  
}

