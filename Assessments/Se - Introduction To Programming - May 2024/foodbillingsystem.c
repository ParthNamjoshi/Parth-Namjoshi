
//  Write a program for Food Billing System....
#include<stdio.h> // Standard input outpur header file..
main() // main function 
{
	int c,qyt,amount; // variable declaration for choice,quantity,total amount...
	char ch; // variable delatation for choice for condition of do.while loop
	do // do..while loop 
	{	
		// display food name and it's price....
		printf("\n<-----------------Parth Resturant----------------->\n");
		printf("Food Name\t||\tPrice \n");
		printf("*******************************");
		printf("\n1.Pizza\t\t||\t250rs/pc");
		printf("\n2.Burger\t||\t200rs/pc");
		printf("\n3.Idli\t\t||\t80rs/plate");
		printf("\n4.Dosa\t\t||\t100rs/pc");
		printf("\n5.Gujarati Thali||\t150rs/thali");
		printf("\n6.Punjabi Thali ||\t160rs/thali");
		printf("\n7.Lassi\t\t||\t60rs/pc");
		printf("\n8.Cold drinks\t||\t50rs/pc");
		printf("\nEnter your Choice....."); // input from user
		scanf("%d",&c);// store choice in c variable
		if(c==1) // checking condition for 1
		{
			
			printf("\nYou selected Pizza");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*250); // calculation of total amount 
			printf("Amount=%d",qyt*250);//calculation of amount
			printf("\nTotal Amount=%d",amount);		
		}
		else if(c==2) // checking condition for 2
		{
			
			printf("\nYou selected Burger");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*200); // calculation of total amount 
			printf("Amount=%d",qyt*200);//calculation of amount
			printf("\nTotal Amount=%d",amount);	
		}
		else if(c==3)// checking condition for 3
		{
			
			printf("\nYou selected Idli");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*80); // calculation of total amount 
			printf("Amount=%d",qyt*80);//calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else if(c==4)// checking condition for 4
		{
			
			printf("\nYou selected Dosa");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*100);// calculation of total amount 
			printf("Amount=%d",qyt*100);//calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else if(c==5)// checking condition for 5
		{
			
			printf("\nYou selected Gujarati Thali");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*150);// calculation of total amount 
			printf("Amount=%d",qyt*150);//calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else if(c==6)// checking condition for 6
		{
			
			printf("\nYou selected Punjabi Thali");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*160);// calculation of total amount 
			printf("Amount=%d",qyt*160);//calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else if(c==7)// checking condition for 7
		{
			
			printf("\nYou selected Lassi");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*60);// calculation of total amount 
			printf("Amount=%d",qyt*60);//calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else if(c==8)// checking condition for 8
		{
			
			printf("\nYou selected Cold Drinks");
			printf("Enter the total quantity=");
			scanf("%d",&qyt);
			amount=amount+(qyt*50);// calculation of total amount 
			printf("Amount=%d",qyt*50); //calculation of amount
			printf("\nTotal Amount=%d",amount);
		}
		else 
		{
			printf("Invalid..");
		}
		printf("\nDo you want place more order?[y/n]:"); // print messsage for purchase items again
		scanf("%s",&ch);// store choice in ch variable
	}while(ch!='n'); // if user input n then while loop terminated..
}
