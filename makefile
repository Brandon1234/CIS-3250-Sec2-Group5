all: legacy-calculator

legacy-calculator:
	gcc -Wall -std=c99 -pedantic src/cis3250-legacy-calculator.c -o bin/legacy-calculator
	
clean:
	rm bin/legacy-calculator
