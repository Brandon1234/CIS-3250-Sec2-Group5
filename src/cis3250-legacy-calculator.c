#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535897932384626433832795
#include "factorial.h"
#include "matrices.h"
#include "powerfunction.h"
#include "conversions.h"
#include<string.h>

FILE*help;


float input(char*inname)
{
	float key;
	char temp[9999];
	
	do{
	printf("%s",inname);
	 if(!scanf("%f",&key)){
		scanf("%s",&temp);//recieve temp
	      	printf("Please try again!\n");
	}
	else{
		return key;
	}
	}while(1);	 
}

float inputAry(char*inname,int num)
{
	float key;
	char temp[9999];

	do{
	printf("%s[%d]: ",inname,num+1);
	 if(!scanf("%f",&key)){
		scanf("%s",&temp);
	      	printf("Please try again!\n");
	}
	else{
		return key;
	}
	}while(1);	 
}

float plus(float adder,float addin)
{
	float result;
	result=adder+addin;
	return result;
}

float minus(float miner,float minin)
{
	float result;
	result=miner-minin;
	return result;
}

float mult(float multer,float multin)
{
	float result;
	result=multer*multin;
	return result;
}

float divind(float divider,float dividin)
{
	float result;
	result=divider/dividin;
	return result;
}

int factorial(int term)
{

	if(term==0){
		return 1;
	}

	return term*factorial(term-1);
}

int fib(int term)
{
	if(term==1){
		return 0;
	}
	if(term==2){
		return 1;
	}
	return fib(term-1)+fib(term-2);
}

float power(float base,int pow)
{
	int i;
	float mem=1;
	for(i=0;i<pow;i++){
		mem*=base;
	}
	return mem;
}

float sine(float radius)
{
	float val,sin;
		val=radius*(PI/180);
		sin=val-(power(val,3)/factorial(3))+(power(val,5)/factorial(5))-(power(val,7)/factorial(7));
	return sin;
}

float cosine(float radius)
{
	float val,cos;
		val=radius*(PI/180);
		cos=1-(power(val,2)/factorial(2))+(power(val,4)/factorial(4))-(power(val,6)/factorial(6));
	return cos;
}

int spprint(char*screen,char*sym,int ini,int res)
{
	printf("%s %d%s = %d\n",screen,ini,sym,res);
	
return 0;
}

float spprintf(char*screen,char*sym,float ini,float res)
{
	printf("%s %.4f%s = %.4f\n",screen,ini,sym,res);

return 0;
}

float print(char*screen,char*sym,float ini,float upt,float res)
{
	printf("%s %.4f %s %.4f = %.4f\n",screen,ini,sym,upt,res);

return 0;
}
float Aryprint(char*screen,float ans)
{
	printf("%s : %.4f\n",screen,ans);

return 0;
}

	/*
	#
	#
	#  NOAH
	#
	#
	*/

int main(int argc, char* argv[]) {
    
    // Initial variable declarations
	float a, b, c;
	float r1, r2;
	int menu, rmenu, smenu;

    // Start of master loop
    do {
        
        // Print starting menu to the user
        printf("\n======\n");
        printf("Menu\n");
        printf("======\n");
        printf("1. Regular Calculator\n");
        printf("2. Scientific Calculator\n");
        printf("3. Acountant Calculator\n");
        printf("4. Read Help and Notice\n");
        printf("0. Exit\n");
        
        // Get the input choice from the user
        menu = input("Select Menu: ");
        system("clear");

        // Handle user choice
        if (menu == 1) {
            
            // User chose the regular calculator
            
            // Loop for regular calculator
            do {
                
                // Print regular calculator menu to user
                printf("\n======================\n");
                printf("Regular Calculator Menu\n");
                printf("=======================\n");
                printf("1. PLUS\n");
                printf("2. MINUS\n");
                printf("3. MULTIPLY\n");
                printf("4. DIVIDE\n");
                printf("0. BACK\n");
                
                // Get the input choice from the user
                rmenu = input("Select Menu: ");
                system("clear");

                // Handle regular calculator choice
                if (rmenu == 1) {
                    
                    // User chose addition
                    
                    // Get two values from the user
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    
                    // Perform the addition
                    c = plus(a, b);
                    
                    // Print the result to the user
                    printf("\n");
                    print("sum of", "plus", a, b, c);
                    
                }

                if (rmenu == 2) {
                    
                    // User chose subtraction
                    
                    // Get two values from the user
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    
                    // Perform the subtraction
                    c = minus(a, b);
                    
                    // Print the result to the user
                    printf("\n");
                    print("result of", "minus", a, b, c);
                    
                }

                if (rmenu == 3) {
                    
                    // User chose multiplication
                    
                    // Get two values from the user
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    
                    // Perform the multiplication
                    c = mult(a, b);
                    
                    // Print the result to the user
                    printf("\n");
                    print("result of", "x", a, b, c);
                    
                }

                if (rmenu == 4) {
                    
                    // User chose division
                    
                    // Get two values from the user
                    a = input("Enter value 1 st: ");
                    b = input("Enter value 2 nd: ");
                    
                    // Perform the division
                    c = divind(a ,b);
                    
                    // Print the result to the user
                    printf("\n");
                    print("result", "/", a, b, c);
                    
                }

            // Go back to the master menu if user chose 0
            } while (rmenu != 0);
            
        }

        if (menu == 2) {
            
            // User chose the scientific calculator

            // Loop for the scientific calculator
            do {
                
                // Print scientific calculator menu to user
                printf("\n===========================\n");
                printf("Scientific Calculator Menu\n");
                printf("===========================\n");
                printf("1. Power function (x^y)\n");
                printf("2. Factorial Series (x!)\n");
                printf("3. Fibonacci Series \n");
                printf("4. Sine (Sin x)\n");
                printf("5. Cosine (cos x)\n");
                printf("6. Tangent (Tan x)\n");
                printf("7. Cosec (cosec x)\n");
                printf("8. Sec (sec x)\n");
                printf("9. Cot (cot x)\n");
                printf("10. Matrix functions\n");
                printf("11. Conversion functions\n");
                printf("0. Back\n");
                
                // Get menu choice from the user
                smenu = input("Select Menu: ");
                system("clear");

                // Handle scientific menu choice
                if (smenu == 1) {
                    
                    // User chose the power function
                    
                    // Get base and power values from user
                    a = input("Enter base(x): ");
                    b = input("Enter power(y): ");
                    
                    // Perform the power function
                    c = powerfn(a, b);
                    
                    // Print the result to the user
                    printf("\n");
                    print("result of", "^", a, b, c);
                    
                }

                if (smenu == 2) {
                    
                    // User chose the factorial
                    
                    // Get the factorial term from the user
                    a = input("Enter numbers of term: ");
                    
                    // Perform the factorial
                    c = fact(a);
                    
                    // Print the result to the user
                    printf("\n");
                    spprint("Factorial of", "!", a, c);
                    
                }

                if (smenu == 3) {
                    
                    // User chose the fibonacci series
                    
                    // Get the number of terms from the user
                    a = input("Enter numbers of term: ");
                    
                    // Get fibonacci result
                    c = fib(a);
                    
                    // Print the result to the user
                    printf("\n");
                    spprint("Fibonacci of", " ", a, c);
                    
                }

                if (smenu == 4) {
                    
                    // User chose the sine function
                    
                    // Get value from user
                    a = input("Enter your value: ");
                    
                    // Get sine of value
                    c = sine(a);
                    
                    // Print result to the user
                    printf("\n");
                    spprintf("Sine of", " ", a, c);
                    
                }

                if (smenu == 5) {
                    
                    // User chose the cosine function
                    
                    // Get value from user
                    a = input("Enter your value: ");
                    
                    // Get cosine of value
                    c = cosine(a);
                    
                    // Print result to the user
                    printf("\n");
                    spprintf("Cosine of", " ", a, c);
                    
                }

	/*
	#
	#
	# LUCA BOZZETTO
	#
	#
	*/

	if(smenu==6){
		a=input("Enter your value: ");
		r1=sine(a);
		r2=cosine(a);
		c=r1/r2;
		printf("\n");
		spprintf("Tangent of"," ",a,c);
	}

	if(smenu==7){
		a=input("Enter your value: ");
		c=sine(a);
		printf("\n");
		spprintf("Cosec of"," ",a,1/c);
	}

	if(smenu==5){
		a=input("Enter your value: ");
		c=cosine(a);
		printf("\n");
		spprintf("Sec of"," ",a,1/c);
	}

	if(smenu==8){
		a=input("Enter your value: ");
		r1=sine(a);
		r2=cosine(a);
		c=r1/r2;
		printf("\n");
		spprintf("Cot of"," ",a,1/c);
	}

	if(smenu==10){
		int operation_number=0;
		       printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
       printf("\n\tEnter an operation command:");
       scanf("%d",&operation_number);

      switch(operation_number){
       case 1: matrix_sum();break;
       case 2: matrix_transpose();break;
       case 3: matrix_product();break;
       }
	}

	if(smenu==11){
		int operation_number=0;
		        printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
        printf("\n\n\n\t\tPlease choose an operation number:");
        scanf("%d",&operation_number);

        switch(operation_number){
            case 1: temp();break;
            case 2: time();break;
        }
        break;

	}



}while(smenu!=0);
}

if(menu==3){

	warp:

		//system("clear");
		printf("\n===========================\n");
		printf("Accountant Calculator Menu\n");
		printf("===========================\n");
		printf("Please set value first\n");
		printf("\n");

	int n,i,j,amenu;
	float rest,max,min,x_bar=0,sum=0;
	float med,mod,count;
	int temp;

		n=input("Enter number of term: ");

	float set[n];
	int numtemp[n];

	 for(i=0;i<n;i++){
		set[i]=inputAry("Enter value terms",i);
	}

	 for(i=0;i<n;i++){
	 	 for(j=0;j<=i;j++){
     			 if(set[j]>set[i]){
				rest=set[j];
				set[j]=set[i];
				set[i]=rest;
 			 }
  		}
  	}

min = set[0];
max = set[n-1];

for(i=0;i<n;i++){
	sum+=set[i];
}
x_bar=(sum/n);

if((n%2)!=0){
	med=set[((n+1)/2)-1];
}
else{
	med=(set[((n+1)/2)]+set[((n+1)/2)-1])/2;
}

for(i=0;i<n;i++){
	numtemp[i]=0;
}
for(i=0;i<n;i++){
	temp=set[i];
	for(j=i;j<n;j++){
	if(set[j]==temp){
		numtemp[i]++;
	}
	}
}

	/*
	#
	#
	# RYAN 
	#
	#
	*/

temp=numtemp[0];
for(i=1;i<n;i++){
	if(numtemp[i]>temp){
		temp = numtemp[i];
	}
}

if(i==999){//Always False If

warp1://Warp form menu
j=0;

for(i=0;i<n;i++){
	if(numtemp[i]==temp){
		j++;
	}
}

if(j==1){
	for(i=0;i<n;i++){
	if(numtemp[i]==temp){
		printf("%.4f\n",set[i]);
	}
	}
}

else{
	printf("Not have mode value\n");	
}

}

	 do{
		printf("\n===========================\n");
		printf("Accountant Calculator Menu\n");
		printf("===========================\n");
		printf("1.Show max\n");
		printf("2.Show min\n");
		printf("3.Show x-bar\n");
		printf("4.Show range\n");
		printf("5.Show Med\n");
		printf("6.Show Mode\n");
		printf("7.Show value(sort)\n");
		printf("8.Set new value\n");
		printf("0.Back\n");
		amenu = input("Select Menu: ");//input acountant  menu
		system("clear");

		if(amenu==1){
			printf("\n");
			Aryprint("Max is",max);
		}

		if(amenu==2){
			printf("\n");
			Aryprint("Min is",min);
		}

		if(amenu==3){
			printf("\n");
			Aryprint("X-bar is",x_bar);
		}

		if(amenu==4){
			printf("\n");
			Aryprint("Range is",max-min);
		}

		if(amenu==5){
			printf("\n");
			Aryprint("Med is",med);
		}

		if(amenu==6){
			printf("\n");
			printf("Mode is: ");
			goto warp1;
		}

		if(amenu==7){
			printf("\n");
			printf("Set of number is(sort): ");
			for(i=0;i<n;i++){
			printf("%.3f ",set[i]);
			}
		}

		if(amenu==8){
			goto warp;
		}

		}while(amenu!=0);
	}

	if(menu==4){
		char text;

			help = fopen("User_helping.txt","r");
		
			while((text=fgetc(help))!=EOF){
				fprintf(stdout,"%c",text);
			}

			fclose(help);
	}
}while(menu!=0);

return 0;
}

