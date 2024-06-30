/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
int main()
{
	int maths,physics,chemistry,total,tmaphy;
	printf("Enter Maths Marks : ");
	scanf("%d",&maths);
	printf("\nEnter Physics Marks : ");
	scanf("%d",&physics);
	printf("\nEnter Chemistry Marks : ");
	scanf("%d",&chemistry);
	total=maths+physics+chemistry;
	tmaphy=total-chemistry; 
	if((maths>=65 && physics>=55 && chemistry>=50 && total>=190) || (tmaphy>=140))
	{
		printf("\nThe candidate is  eligible for admission to a professional course ");

	}
	else
	{
		printf("\nThe candidate is Not eligible for admission to a professional course ");
	}
	
}

