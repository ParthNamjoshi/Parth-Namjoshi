//  15. Write a C program to determine eligibility for admission to a professional 
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.


#include <stdio.h>
int main(){
	
	int math , phy , chem , total1 , total2;
	
	printf("Enter Math marks :");
	scanf("%d",&math);
	printf("Enter Phy marks :");
	scanf("%d",&phy);
	printf("Enter chem marks :");
	scanf("%d",&chem);
	
	total1 = math + phy + chem;
	
	total2 = math + phy;
	
	if((math >=65 && phy >=55) && (chem >=50 && total1 >=190)){
		printf("Your eligible");
	}
 else if (total2 >= 140) {
        printf("You are eligible");
    }

	else{
		printf("Your not eligible");
	}
	
	
}
