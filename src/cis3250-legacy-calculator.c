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

                //Last edited by Luca Bozzetto on 10/31 18:00 PM

				// Tangent
				if (smenu == 6) {

					float userInput, sin, cos, tangent;

					userInput = input("Enter your value: ");

					// Tanger is defined as sin / cos
					sin = sine(userInput);
					cos = cosine(userInput);
					tangent = sin / cos;

					printf("\n");
					spprintf("Tangent of", " ", userInput, tangent);

				}

				// Cosecant
				if (smenu == 7) {

					float userInput, sin, cosecant;

					userInput = input("Enter your value: ");

					// Cosecant is defined as 1 / sin
					sin = sine(userInput);
					cosecant = 1 / sin;

					printf("\n");
					spprintf("Cosec of", " ", userInput, cosecant);

				}

				// Secant
				if (smenu == 8) {
					
					float userInput, cos, secant;

					userInput = input("Enter your value: ");

					// Secant is defined as 1 / cos
					cos = cosine(userInput);
					secant = 1 / cos;

					printf("\n");
					spprintf("Sec of", " ", userInput, secant);

				}

				// Cotangent
				if (smenu == 9) {

					float userInput, sin, cos, tangent, cotangent;

					userInput = input("Enter your value: ");

					// Cotangent is defined as 1 / tangent
					sin = sine(userInput);
					cos = cosine(userInput);
					tangent = cos/sin;
					cotangent = 1/tangent;

					printf("\n");
					spprintf("Cot of", " ", userInput, cotangent);

				}

				// Matrix functions
				if (smenu == 10) {
					
					int operationNumber = 0;

					printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
					printf("\n\tEnter an operation command:");
					scanf("%d", &operationNumber);

					switch (operationNumber) {

						case 1: matrix_sum();
								break;
						case 2: matrix_transpose();
								break;
						case 3: matrix_product();
								break;

					}

				}

				// Conversion functions
				if (smenu == 11) {

					int operationNumber = 0;
					
					printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
					printf("\n\n\n\t\tPlease choose an operation number:");
					scanf("%d", &operationNumber);

					switch(operationNumber) {

						case 1: temp(); //
								break;
						case 2: time();
								break;

					}

					break;

				}

			} while (smenu != 0);

		}

		// Accountant Calculator
		if (menu == 3) {

			accountantInsertValues:

				printf("\n===========================\n");
				printf("Accountant Calculator Menu\n");
				printf("===========================\n");
				printf("Please set value first\n");
				printf("\n");

				int numberOfTerm, temp, i, j, amenu;
				float swap, max, min, average, sum;
				float median;

				average = 0;
				sum = 0;

				// The user defines how many values we have to read
				numberOfTerm = input("Enter number of term: ");

				float termsArray[numberOfTerm];
				int temporaryArray[numberOfTerm];

				// Get all user values
				for (i = 0; i < numberOfTerm; i++) {

					termsArray[i] = inputAry("Enter value terms", i);

				}

				// Reorder the array from smallest element to greatest
				for (i = 0; i < numberOfTerm; i++) {

					for (j = 0; j <= i; j++) {

						if (termsArray[j] > termsArray[i]) {

							swap = termsArray[j];
							termsArray[j] = termsArray[i];
							termsArray[i] = swap;

						}

					}

				}

				min = termsArray[0];
				max = termsArray[numberOfTerm-1];

				// Compute the total sum of the array
				for (i = 0; i < numberOfTerm; i++) {

					sum += termsArray[i];

				}

				// The average value of the array 
				average = sum / numberOfTerm;

				/***
				 * The median value is the "middle" of a sorted list of numbers
				 * If there is an even number of terms, the median is then the mean
				 * of the two middle values.
				***/
				if ((numberOfTerm % 2) != 0) {

					median = termsArray[((numberOfTerm + 1) / 2) - 1];

				}
				else {

					median = (termsArray[((numberOfTerm + 1) / 2)] 
						+ termsArray[((numberOfTerm + 1) / 2) - 1]) / 2;

				}

				// Initialize temporaryArray to 0
				memset(temporaryArray, 0, numberOfTerm);

				for (i = 0; i < numberOfTerm; i++) {

					temp = termsArray[i];
					for (j = i; j < numberOfTerm; j++) {

						if (termsArray[j] == temp) {

							temporaryArray[i]++;

						}

					}

				}

	
	// Last edited by Ryan Paul on Fri Otc 19 2:12 PM

            temp = temporaryArray[0];

            for(i=1; i<numberOfTerm; i++) {

                if(temporaryArray[i] >temp) {

                    temp = temporaryArray[i];

                }

            }

            //Always False If
            if (i == 999) {

                //Warp form menu
                warp1:

                j=0;

                for(i=0; i<numberOfTerm; i++) {

                        if(temporaryArray[i] == temp) {

                            j++;

                        }
                }

                if(j == 1) {

                    for(i=0; i<numberOfTerm; i++) {

                        if(temporaryArray[i] == temp) {

                            printf("%.4f\n",termsArray[i]);

                        }

                    }

                }

                else {

                        printf("Not have mode value\n");

                }

            }

            // Start of main loop
            do {

                // Printing Accountant menu
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

                //input for acountant menu
                amenu = input("Select Menu: ");
                system("clear");

                //handle choice
                if(amenu == 1) {

                    //prints max value to user
                    printf("\n");
                    Aryprint("Max is",max);

                }

                if(amenu == 2) {

                    //prints min value to user
                    printf("\n");
                    Aryprint("Min is",min);

                }

                if(amenu == 3) {

                    //prints x-bar to user
                    printf("\n");
                    Aryprint("X-bar is",average);

                }

                if(amenu == 4) {

                    //prints range to user
                    printf("\n");
                    Aryprint("Range is",max-min);

                }

                if(amenu == 5) {

                    //prints median to user
                    printf("\n");
                    Aryprint("Med is",median);

                }

                if(amenu == 6) {

                    //prints mode to user
                    printf("\n");
                    printf("Mode is: ");
                    goto warp1;

                }

                if(amenu == 7) {

                    //prints out sorted values
                    printf("\n");
                    printf("Set of number is(sort): ");

                    for(i=0; i<numberOfTerm; i++) {

                        printf("%.3f ",termsArray[i]);

                    }

                }

                if(amenu == 8) {

                    //goes to initial warp and prompts for values
                    goto accountantInsertValues;

                }

            // Continue while amenu is not equal to 0
            } while(amenu != 0);

        }

        if(menu == 4) {

            char text;

            //prints out help guidelines
            help = fopen("User_helping.txt","r");

            while((text = fgetc(help)) != EOF) {

                fprintf(stdout,"%c",text);

            }

            fclose(help);

        }

	// Continue while menu is not equal to 0
	} while(menu != 0);

	return 0;
}
